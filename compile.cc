#include <stdio.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <io.h>
#include <fcntl.h>

#include "rfonttable.h"
#include "ropcodes.h"

int main(int argc, char** argv) {
  std::ifstream file(argv[1]);  // file to read from
  std::string readbuf;          // current line
  std::string databuf;          // data section
  std::string lblbuf;           // label section
  std::vector<size_t> lbls;     // offsets for labels

  while (std::getline(file, readbuf)) {
    if (readbuf[0] == '*') {
      // there is a label here; save it
      lbls.push_back(databuf.length());
    } else if (readbuf.length() != 0) {
      // split the line into tokens delimited by ' '
      std::vector<std::string> tokens;
      {
        std::stringstream ss(readbuf);
        std::string token;
        while (std::getline(ss, token, ' ')) {
          tokens.push_back(token);
        }
      }

      // UnknownOpcode is a special case
      if (tokens[0] == "UnknownOpcode") {
        databuf += static_cast<uint8_t>(std::stoi(tokens[1], nullptr, 16));
        continue;
      }

      // Text is a literal string delimited by quotation marks
      if (tokens[0] == "Text") {
        size_t firstq = readbuf.find("\"");
        size_t lastq = readbuf.rfind("\"");
        std::string text = readbuf.substr(firstq+1, lastq-firstq-1);

        for (auto it = text.begin(); it != text.end();) {
          std::string ch;
          ch += *(it++);

          // proper handling of Unicode codepoints
          // see https://en.wikipedia.org/wiki/UTF-8#Description
          if ((ch[0] & 0xc0) == 0xc0) {
            ch += *(it++);
          }
          if ((ch[0] & 0xe0) == 0xe0) {
            ch += *(it++);
          }

          // rfonttable maps a std::string containing 1 character to its index
          // in the font table
          try {
            auto code = rfonttable.at(ch);
            databuf += static_cast<uint8_t>(code >> 8);
            databuf += static_cast<uint8_t>(code);
          } catch (const std::exception& e) {
            std::cout << "Couldn't lookup character " << ch;
            return 1;
          }
        }
        continue;
      }

      // ropcodes maps an opcode's mnemonic to its binary representation
      auto op = ropcodes.at(tokens[0]);
      databuf += op;

      // also capture the opcode's arguments
      for (auto it = ++(tokens.begin()); it != tokens.end(); it++) {
        databuf += static_cast<uint8_t>(std::stoi(*it, nullptr, 16));
      }
    }
  }

  // first write the total number of labels
  lblbuf += static_cast<uint8_t>(lbls.size());
  lblbuf += static_cast<uint8_t>(lbls.size() >> 8);

  // then write the label offsets
  for (auto lbl : lbls) {
    lbl += lbls.size() * 2;
    // DATA portion contains an extra 2 bytes in the header
    lbl += (std::string(argv[1]).find(".DATA") != std::string::npos) ? 4 : 2;
    lblbuf += static_cast<uint8_t>(lbl);
    lblbuf += static_cast<uint8_t>(lbl >> 8);
  }

  // write the total file length if it's DATA portion
  if (std::string(argv[1]).find(".DATA") != std::string::npos) {
    size_t pos = databuf.length() + lbls.size() * 2 + 4;
    lblbuf += static_cast<uint8_t>(pos);
    lblbuf += static_cast<uint8_t>(pos >> 8);
  }

  // write the label and data sections to stdout
  _setmode(_fileno(stdout), _O_BINARY);
  std::cout << lblbuf;
  std::cout << databuf;

  return 0;
}

