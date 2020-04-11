#include <string>
#include <vector>

std::vector<std::string> fonttable = {
    "　", "■",  "Ａ", "Ｂ", "Ｃ", "Ｄ", "Ｅ", "Ｆ", "Ｇ", "Ｈ", "Ｉ", "Ｊ",
    "Ｋ", "Ｌ", "Ｍ", "Ｎ", "Ｏ", "Ｐ", "Ｑ", "Ｒ", "Ｓ", "Ｔ", "Ｕ", "Ｖ",
    "Ｗ", "Ｘ", "Ｙ", "Ｚ", "ａ", "ｂ", "ｃ", "ｄ", "ｅ", "ｆ", "ｇ", "ｈ",
    "ｉ", "ｊ", "ｋ", "ｌ", "ｍ", "ｎ", "ｏ", "ｐ", "ｑ", "ｒ", "ｓ", "ｔ",
    "ｕ", "ｖ", "ｗ", "ｘ", "ｙ", "ｚ", "０", "１", "２", "３", "４", "５",
    "６", "７", "８", "９", "あ", "い", "う", "え", "お", "か", "き", "く",
    "け", "こ", "さ", "し", "す", "せ", "そ", "た", "ち", "つ", "て", "と",
    "な", "に", "ぬ", "ね", "の", "は", "ひ", "ふ", "へ", "ほ", "ま", "み",
    "む", "め", "も", "や", "ゆ", "よ", "ら", "り", "る", "れ", "ろ", "わ",
    "を", "ん", "が", "ぎ", "ぐ", "げ", "ご", "ざ", "じ", "ず", "ぜ", "ぞ",
    "だ", "ぢ", "づ", "で", "ど", "ば", "び", "ぶ", "べ", "ぼ", "ぱ", "ぴ",
    "ぷ", "ぺ", "ぽ", "ぁ", "ぃ", "ぅ", "ぇ", "ぉ", "ゃ", "ゅ", "ょ", "っ",
    " ",  "ア", "イ", "ウ", "エ", "オ", "カ", "キ", "ク", "ケ", "コ", "サ",
    "シ", "ス", "セ", "ソ", "タ", "チ", "ツ", "テ", "ト", "ナ", "ニ", "ヌ",
    "ネ", "ノ", "ハ", "ヒ", "フ", "ヘ", "ホ", "マ", "ミ", "ム", "メ", "モ",
    "ヤ", "ユ", "ヨ", "ラ", "リ", "ル", "レ", "ロ", "ワ", "ヲ", "ン", "ガ",
    "ギ", "グ", "ゲ", "ゴ", "ザ", "ジ", "ズ", "ゼ", "ゾ", "ダ", "ヂ", "ヅ",
    "デ", "ド", "バ", "ビ", "ブ", "ベ", "ボ", "パ", "ピ", "プ", "ペ", "ポ",
    "ァ", "ィ", "ゥ", "ェ", "ォ", "ャ", "ュ", "ョ", "ッ", "ヶ", "ヴ", "『",
    "』", "「", "」", "（", "）", "？", "！", "：", "－", "ー", "～", "。",
    "、", "．", "，", "・", "‥",  "…",  "○",  "々", "了", "←",  "→",  "▲",
    "▼",  "＄", "─",  "★",  "＠", "；", "□",  "亜", "唖", "哀", "愛", "挨",
    "逢", "悪", "握", "圧", "扱", "宛", "飴", "或", "安", "暗", "案", "闇",
    "以", "伊", "位", "依", "偉", "囲", "委", "威", "尉", "意", "慰", "易",
    "椅", "為", "異", "移", "維", "胃", "衣", "違", "遺", "医", "井", "域",
    "育", "一", "溢", "逸", "稲", "芋", "印", "咽", "員", "因", "姻", "引",
    "飲", "淫", "院", "陰", "隠", "韻", "右", "宇", "羽", "雨", "渦", "嘘",
    "唄", "浦", "瓜", "噂", "云", "運", "雲", "営", "影", "映", "栄", "永",
    "泳", "洩", "英", "衛", "鋭", "液", "疫", "益", "駅", "悦", "越", "閲",
    "円", "園", "宴", "延", "援", "沿", "演", "炎", "煙", "縁", "艶", "遠",
    "鉛", "塩", "汚", "甥", "央", "奥", "往", "応", "押", "横", "欧", "殴",
    "王", "黄", "岡", "沖", "億", "屋", "憶", "臆", "乙", "俺", "卸", "恩",
    "温", "穏", "音", "下", "化", "仮", "何", "価", "佳", "加", "可", "嘉",
    "夏", "嫁", "家", "科", "暇", "果", "架", "歌", "河", "火", "禍", "稼",
    "箇", "花", "荷", "華", "菓", "課", "嘩", "貨", "過", "霞", "我", "画",
    "芽", "賀", "雅", "餓", "介", "会", "解", "回", "塊", "壊", "快", "怪",
    "悔", "懐", "戒", "改", "械", "海", "灰", "界", "皆", "絵", "開", "階",
    "貝", "外", "咳", "害", "慨", "概", "蓋", "街", "該", "垣", "嚇", "各",
    "拡", "格", "核", "殻", "獲", "確", "穫", "覚", "角", "較", "郭", "閣",
    "隔", "革", "学", "岳", "楽", "額", "顎", "掛", "割", "喝", "括", "活",
    "滑", "轄", "叶", "鞄", "株", "蒲", "釜", "噛", "乾", "冠", "寒", "刊",
    "勘", "勧", "巻", "姦", "完", "官", "寛", "干", "幹", "患", "感", "慣",
    "憾", "換", "敢", "款", "歓", "汗", "漢", "環", "甘", "監", "看", "管",
    "簡", "緩", "肝", "艦", "観", "貫", "還", "間", "閑", "関", "陥", "館",
    "丸", "含", "玩", "眼", "岩", "頑", "顔", "願", "企", "危", "喜", "器",
    "基", "奇", "嬉", "寄", "岐", "希", "幾", "忌", "揮", "机", "旗", "既",
    "期", "棋", "棄", "機", "帰", "気", "汽", "畿", "祈", "季", "紀", "規",
    "記", "貴", "起", "軌", "輝", "飢", "鬼", "偽", "儀", "宜", "戯", "技",
    "擬", "犠", "疑", "義", "議", "菊", "吉", "喫", "詰", "却", "客", "脚",
    "虐", "逆", "丘", "久", "仇", "休", "及", "吸", "宮", "弓", "急", "救",
    "朽", "求", "泣", "球", "究", "窮", "級", "給", "旧", "牛", "去", "居",
    "巨", "拒", "拠", "挙", "虚", "許", "距", "漁", "魚", "享", "京", "供",
    "競", "共", "凶", "協", "叫", "境", "強", "怯", "恐", "恭", "挟", "教",
    "橋", "況", "狂", "狭", "胸", "脅", "興", "郷", "鏡", "響", "驚", "仰",
    "凝", "暁", "業", "局", "曲", "極", "玉", "僅", "勤", "均", "斤", "琴",
    "禁", "筋", "緊", "菌", "襟", "謹", "近", "金", "銀", "九", "倶", "句",
    "区", "苦", "躯", "駆", "具", "愚", "空", "偶", "遇", "隅", "屑", "屈",
    "掘", "靴", "熊", "隈", "栗", "繰", "桑", "勲", "君", "訓", "群", "軍",
    "郡", "袈", "係", "傾", "刑", "兄", "啓", "型", "契", "形", "径", "恵",
    "慶", "憩", "掲", "携", "敬", "景", "桂", "渓", "稽", "系", "経", "継",
    "繋", "罫", "蛍", "計", "詣", "警", "軽", "鶏", "芸", "迎", "鯨", "劇",
    "撃", "激", "隙", "傑", "欠", "決", "潔", "穴", "結", "血", "月", "件",
    "倹", "倦", "健", "兼", "券", "剣", "喧", "圏", "堅", "嫌", "建", "憲",
    "懸", "拳", "検", "権", "犬", "献", "研", "絹", "県", "肩", "見", "謙",
    "賢", "軒", "遣", "鍵", "険", "験", "元", "原", "厳", "幻", "減", "源",
    "玄", "現", "言", "限", "個", "古", "呼", "固", "孤", "己", "庫", "戸",
    "故", "枯", "湖", "袴", "股", "誇", "雇", "顧", "鼓", "五", "互", "午",
    "呉", "吾", "娯", "後", "御", "悟", "碁", "語", "誤", "護", "乞", "交",
    "候", "光", "公", "功", "効", "厚", "口", "向", "后", "喉", "垢", "好",
    "孔", "孝", "工", "巧", "幸", "広", "康", "弘", "恒", "慌", "抗", "拘",
    "控", "攻", "更", "校", "構", "江", "洪", "港", "溝", "甲", "皇", "硬",
    "稿", "紅", "絞", "綱", "耕", "考", "肯", "膏", "航", "荒", "行", "講",
    "貢", "購", "郊", "鉱", "鋼", "降", "項", "香", "高", "剛", "号", "合",
    "拷", "豪", "轟", "克", "刻", "告", "国", "酷", "黒", "獄", "腰", "惚",
    "骨", "込", "此", "頃", "今", "困", "墾", "婚", "恨", "懇", "昏", "根",
    "混", "紺", "魂", "痕", "佐", "左", "差", "査", "沙", "砂", "鎖", "裟",
    "座", "挫", "債", "催", "再", "最", "塞", "妻", "宰", "彩", "才", "採",
    "栽", "歳", "済", "災", "砕", "祭", "斎", "細", "菜", "裁", "載", "際",
    "剤", "在", "材", "罪", "財", "坂", "阪", "咲", "崎", "作", "削", "昨",
    "策", "索", "錯", "桜", "冊", "刷", "察", "拶", "撮", "擦", "札", "殺",
    "雑", "錆", "三", "参", "山", "惨", "散", "産", "算", "蚕", "賛", "酸",
    "斬", "暫", "残", "仕", "仔", "伺", "使", "刺", "司", "史", "嗣", "四",
    "士", "始", "姉", "姿", "子", "市", "師", "志", "思", "指", "支", "施",
    "旨", "枝", "止", "死", "氏", "祉", "私", "糸", "紙", "紫", "肢", "脂",
    "至", "視", "詞", "詩", "試", "誌", "資", "賜", "雌", "飼", "歯", "事",
    "似", "侍", "児", "字", "寺", "慈", "持", "時", "次", "滋", "治", "磁",
    "示", "耳", "自", "辞", "鹿", "式", "識", "軸", "雫", "七", "叱", "執",
    "失", "嫉", "室", "湿", "漆", "疾", "質", "実", "柴", "芝", "舎", "写",
    "射", "捨", "赦", "斜", "煮", "社", "者", "謝", "車", "遮", "蛇", "邪",
    "借", "勺", "尺", "杓", "灼", "酌", "釈", "若", "寂", "弱", "主", "取",
    "守", "手", "殊", "狩", "珠", "種", "趣", "酒", "首", "受", "呪", "寿",
    "授", "樹", "需", "収", "周", "宗", "就", "州", "修", "拾", "秀", "秋",
    "終", "習", "臭", "舟", "衆", "襲", "蹴", "週", "酬", "集", "醜", "住",
    "充", "十", "従", "柔", "汁", "渋", "獣", "縦", "重", "銃", "叔", "宿",
    "淑", "祝", "縮", "粛", "熟", "出", "術", "述", "俊", "春", "瞬", "循",
    "旬", "楯", "準", "潤", "純", "巡", "順", "処", "初", "所", "暑", "庶",
    "緒", "署", "書", "諸", "助", "叙", "女", "序", "徐", "除", "傷", "償",
    "勝", "升", "召", "商", "唱", "嘗", "奨", "宵", "将", "小", "少", "尚",
    "庄", "床", "彰", "承", "招", "掌", "昇", "昌", "昭", "晶", "松", "沼",
    "消", "渉", "焼", "焦", "照", "症", "省", "硝", "祥", "称", "章", "笑",
    "粧", "紹", "衝", "裳", "訟", "証", "詳", "象", "賞", "鐘", "障", "上",
    "丈", "乗", "冗", "剰", "城", "場", "嬢", "常", "情", "条", "杖", "浄",
    "状", "畳", "蒸", "譲", "醸", "嘱", "飾", "拭", "植", "殖", "織", "職",
    "色", "触", "食", "辱", "尻", "伸", "信", "侵", "唇", "娠", "寝", "審",
    "心", "慎", "振", "新", "森", "浸", "深", "申", "真", "神", "紳", "臣",
    "芯", "親", "診", "身", "辛", "進", "針", "震", "人", "仁", "刃", "塵",
    "尋", "訊", "尽", "迅", "陣", "須", "酢", "図", "吹", "垂", "推", "水",
    "睡", "粋", "衰", "遂", "酔", "随", "瑞", "髄", "崇", "数", "枢", "据",
    "杉", "菅", "裾", "澄", "寸", "世", "瀬", "是", "凄", "制", "勢", "姓",
    "征", "性", "成", "政", "整", "星", "晴", "正", "清", "牲", "生", "盛",
    "精", "聖", "声", "製", "西", "誠", "誓", "請", "青", "静", "斉", "税",
    "脆", "隻", "席", "惜", "戚", "昔", "析", "石", "積", "籍", "績", "責",
    "赤", "跡", "切", "拙", "接", "摂", "折", "設", "節", "説", "雪", "絶",
    "舌", "仙", "先", "千", "占", "宣", "専", "尖", "川", "戦", "扇", "栓",
    "泉", "浅", "洗", "染", "潜", "煽", "旋", "線", "繊", "羨", "船", "薦",
    "詮", "践", "選", "閃", "鮮", "前", "善", "然", "全", "禅", "繕", "措",
    "楚", "狙", "疎", "礎", "祖", "租", "粗", "素", "組", "蘇", "訴", "阻",
    "僧", "創", "双", "倉", "喪", "壮", "奏", "層", "想", "捜", "掃", "挿",
    "掻", "操", "早", "巣", "燥", "争", "痩", "相", "窓", "総", "草", "荘",
    "葬", "蒼", "装", "走", "送", "遭", "騒", "像", "増", "憎", "臓", "蔵",
    "贈", "造", "促", "側", "則", "即", "息", "束", "測", "足", "速", "俗",
    "属", "賊", "族", "続", "卒", "袖", "其", "揃", "存", "孫", "尊", "損",
    "村", "他", "多", "太", "汰", "唾", "妥", "打", "駄", "体", "対", "耐",
    "帯", "待", "怠", "態", "戴", "替", "泰", "胎", "袋", "貸", "退", "隊",
    "代", "台", "大", "第", "題", "滝", "卓", "宅", "択", "拓", "沢", "濯",
    "託", "濁", "諾", "叩", "但", "達", "奪", "脱", "辿", "谷", "誰", "丹",
    "単", "嘆", "担", "探", "旦", "淡", "炭", "短", "端", "胆", "誕", "団",
    "壇", "弾", "断", "暖", "段", "男", "談", "値", "知", "地", "恥", "池",
    "痴", "稚", "置", "致", "遅", "築", "畜", "竹", "蓄", "逐", "秩", "窒",
    "茶", "着", "中", "仲", "宙", "忠", "抽", "昼", "柱", "注", "虫", "酎",
    "鋳", "駐", "著", "貯", "丁", "兆", "喋", "帳", "庁", "張", "彫", "徴",
    "懲", "挑", "暢", "朝", "潮", "町", "眺", "聴", "腸", "調", "超", "跳",
    "長", "頂", "鳥", "直", "沈", "珍", "賃", "鎮", "陳", "津", "墜", "追",
    "痛", "通", "塚", "掴", "辻", "潰", "坪", "爪", "釣", "鶴", "亭", "低",
    "停", "偵", "貞", "呈", "堤", "定", "帝", "底", "庭", "弟", "抵", "提",
    "程", "締", "艇", "訂", "諦", "邸", "釘", "泥", "摘", "敵", "滴", "的",
    "笛", "適", "溺", "哲", "徹", "撤", "鉄", "典", "天", "展", "店", "添",
    "纏", "貼", "転", "点", "伝", "殿", "田", "電", "吐", "堵", "塗", "妬",
    "徒", "斗", "渡", "登", "賭", "途", "都", "努", "度", "土", "奴", "怒",
    "倒", "党", "冬", "凍", "刀", "唐", "塔", "島", "投", "東", "桃", "棟",
    "盗", "湯", "涛", "灯", "当", "等", "答", "筒", "糖", "統", "到", "藤",
    "討", "豆", "踏", "逃", "透", "陶", "頭", "闘", "働", "動", "同", "堂",
    "導", "憧", "瞳", "童", "胴", "道", "銅", "峠", "得", "徳", "特", "督",
    "毒", "独", "読", "突", "届", "寅", "沌", "豚", "頓", "呑", "曇", "鈍",
    "奈", "那", "内", "謎", "馴", "南", "軟", "難", "二", "尼", "匂", "賑",
    "肉", "日", "乳", "入", "如", "尿", "任", "妊", "忍", "認", "濡", "寧",
    "猫", "熱", "年", "念", "捻", "燃", "粘", "乃", "之", "悩", "濃", "納",
    "能", "脳", "農", "覗", "把", "播", "波", "派", "破", "婆", "馬", "俳",
    "廃", "拝", "排", "敗", "杯", "背", "肺", "輩", "配", "倍", "培", "梅",
    "買", "売", "賠", "這", "伯", "剥", "博", "拍", "泊", "白", "舶", "薄",
    "迫", "漠", "爆", "縛", "麦", "箱", "幡", "肌", "畑", "八", "発", "髪",
    "伐", "罰", "抜", "鳩", "伴", "判", "半", "反", "帆", "搬", "板", "版",
    "犯", "班", "畔", "繁", "般", "販", "範", "晩", "番", "盤", "蛮", "卑",
    "否", "妃", "彼", "悲", "扉", "批", "披", "比", "泌", "疲", "皮", "秘",
    "肥", "被", "費", "避", "非", "飛", "備", "尾", "微", "眉", "美", "鼻",
    "匹", "彦", "膝", "菱", "肘", "必", "筆", "姫", "百", "俵", "標", "氷",
    "漂", "票", "表", "評", "描", "病", "秒", "苗", "品", "浜", "貧", "頻",
    "敏", "瓶", "不", "付", "夫", "婦", "富", "布", "府", "怖", "扶", "敷",
    "普", "浮", "父", "符", "腐", "膚", "負", "賦", "赴", "侮", "撫", "武",
    "舞", "部", "封", "風", "伏", "副", "復", "幅", "服", "福", "腹", "複",
    "覆", "淵", "払", "沸", "仏", "物", "分", "吻", "憤", "奮", "粉", "紛",
    "雰", "文", "聞", "丙", "併", "兵", "幣", "平", "柄", "並", "閉", "米",
    "壁", "癖", "別", "蔑", "偏", "変", "片", "編", "辺", "返", "遍", "便",
    "勉", "弁", "保", "舗", "捕", "歩", "補", "穂", "募", "墓", "慕", "暮",
    "母", "簿", "俸", "包", "呆", "報", "奉", "宝", "峰", "崩", "抱", "放",
    "方", "法", "泡", "砲", "縫", "胞", "芳", "褒", "訪", "豊", "邦", "飽",
    "乏", "亡", "傍", "剖", "坊", "妨", "帽", "忘", "忙", "房", "暴", "望",
    "某", "棒", "冒", "紡", "肪", "膨", "謀", "貌", "貿", "防", "吠", "頬",
    "北", "僕", "墨", "撲", "牧", "勃", "没", "奔", "本", "翻", "凡", "摩",
    "磨", "魔", "麻", "埋", "妹", "昧", "枚", "毎", "幕", "膜", "枕", "又",
    "末", "迄", "万", "慢", "満", "漫", "味", "未", "魅", "密", "蜜", "脈",
    "妙", "民", "眠", "務", "夢", "無", "霧", "娘", "名", "命", "明", "盟",
    "迷", "銘", "鳴", "滅", "免", "綿", "面", "模", "茂", "妄", "毛", "猛",
    "盲", "網", "耗", "木", "黙", "目", "戻", "貰", "問", "悶", "紋", "門",
    "匁", "也", "夜", "野", "弥", "矢", "厄", "役", "約", "薬", "訳", "躍",
    "柳", "愉", "油", "癒", "諭", "輸", "唯", "優", "勇", "友", "幽", "憂",
    "有", "猶", "由", "祐", "裕", "誘", "遊", "郵", "雄", "融", "夕", "予",
    "余", "与", "誉", "預", "幼", "妖", "容", "揚", "揺", "曜", "様", "洋",
    "溶", "用", "羊", "葉", "要", "踊", "遥", "陽", "養", "抑", "欲", "浴",
    "翌", "翼", "羅", "裸", "来", "頼", "雷", "絡", "落", "酪", "乱", "卵",
    "欄", "藍", "覧", "利", "吏", "履", "理", "璃", "裏", "里", "離", "陸",
    "律", "率", "立", "略", "流", "溜", "留", "粒", "隆", "竜", "龍", "慮",
    "旅", "虜", "僚", "両", "凌", "寮", "料", "涼", "猟", "療", "瞭", "良",
    "量", "陵", "領", "力", "緑", "林", "臨", "輪", "隣", "瑠", "塁", "涙",
    "累", "類", "令", "例", "冷", "励", "礼", "鈴", "隷", "零", "霊", "麗",
    "齢", "暦", "歴", "列", "劣", "烈", "裂", "廉", "恋", "憐", "練", "連",
    "錬", "炉", "路", "露", "労", "廊", "朗", "楼", "浪", "漏", "篭", "老",
    "郎", "六", "録", "論", "和", "話", "歪", "脇", "惑", "枠", "鷲", "湾",
    "腕", "呟", "呻", "咄", "咬", "喘", "嗚", "嗅", "嗟", "嘔", "嘲", "囁",
    "奢", "恍", "愕", "慄", "憑", "戮", "拗", "揉", "攣", "曖", "泄", "洒",
    "渾", "滲", "焉", "猥", "痙", "痺", "癇", "癲", "眩", "睨", "瞼", "綺",
    "罠", "羞", "腑", "膣", "臀", "茫", "訝", "踵", "騙", "◎",  "梓", "窺",
    "苛", "牙", "駕", "崖", "缶", "鑑", "亀", "汲", "喰", "牽", "虎", "巷",
    "腔", "忽", "些", "皿", "朱", "愁", "盾", "逝", "醒", "蝉", "噌", "遡",
    "惰", "滞", "狸", "弛", "兎", "鍋", "罵", "柏", "箸", "鉢", "閥", "飯",
    "紐", "楓", "噴", "塀", "弊", "陛", "瞥", "朴", "殆", "矛", "姪", "儲",
    "餅", "爺", "涌", "嵐", "掠", "糧", "呂", "弄", "椀", "碗", "俯", "儚",
    "埒", "徊", "徘", "晰", "枷", "檻", "鬱", "涸", "皺", "胱", "膀", "贅",
    "躇", "躊", "躰", "頷", "鯱", "苔", "哉", "惹", "巾", "曰", "畏", "萎",
    "伽", "蚊", "拐", "涯", "渇", "堪", "稀", "撒", "錠", "蝕", "靭", "錐",
    "爽", "耽", "智", "漬", "洞", "縄", "覇", "莫", "斑", "斐", "沫", "擁",
    "肋", "刹", "吼", "咆", "咤", "哮", "唸", "峙", "撼", "朦", "朧", "璧",
    "眸", "絆", "舐", "軋", "阿", "緯", "訣", "昂", "棲", "壷", "薙", "捧",
    "湧", "詫", "揶", "揄", "炒", "蠢", "蹲", "迸", "槽", "狽", "瀕", "狼",
    "丼", "屹", "煌", "廻", "囚", "掟", "葛", "串", "弦", "腫", "妾", "寵",
    "凪", "涎", "炸", "翔", "怨", "喚", "窟", "坑", "吊", "悠", "珀", "琥",
    "貪", "躓", "讐", "逮", "嬌", "餐", "醤", "腎", "銭", "鯛", "燗", "脾",
    "葵", "茜", "渥", "旭", "綾", "鮎", "杏", "惟", "亥", "郁", "磯", "壱",
    "允", "胤", "卯", "丑", "瑛", "詠", "謁", "苑", "翁", "寡", "劾", "馨",
    "且", "鎌", "刈", "棺", "岸", "巌", "毅", "騎", "欺", "橘", "糾", "亨",
    "匡", "喬", "峡", "尭", "桐", "錦", "欣", "欽", "吟", "矩", "駒", "虞",
    "薫", "圭", "慧", "茎", "顕", "弧", "伍", "鯉", "侯", "宏", "晃", "浩",
    "紘", "衡", "酵", "穀", "唆", "詐", "冴", "搾", "笹", "諮", "爾", "璽",
    "汐", "紗", "爵", "儒", "峻", "准", "殉", "淳", "遵", "渚", "匠", "抄",
    "梢", "礁", "肖", "詔", "丞", "穣", "晋", "薪", "甚", "帥", "炊", "翠",
    "錘", "嵩", "畝", "斥", "窃", "遷", "銑", "漸", "塑", "惣", "聡", "霜",
    "堕", "鷹", "琢", "只", "辰", "鍛", "嫡", "衷", "猪", "弔", "脹", "蝶",
    "勅", "朕", "蔦", "廷", "悌", "禎", "逓", "迭", "悼", "燈", "痘", "謄",
    "騰", "匿", "篤", "酉", "惇", "敦", "楠", "弐", "虹", "巴", "媒", "陪",
    "萩", "肇", "隼", "藩", "煩", "頒", "碑", "緋", "罷", "彬", "賓", "芙",
    "譜", "附", "蕗", "墳", "碧", "甫", "輔", "倣", "朋", "萌", "睦", "盆",
    "槙", "亦", "繭", "麿", "巳", "稔", "婿", "孟", "耶", "靖", "佑", "庸",
    "窯", "蓉", "謡", "濫", "蘭", "李", "梨", "痢", "硫", "亮", "諒", "遼",
    "倫", "厘", "伶", "嶺", "怜", "玲", "禄", "賄", "亙", "亘", "侑", "巖",
    "彌", "洸", "洵", "瑶", "皓", "脩", "茉", "莉", "赳", "迪", "頌", "栖",
    "芹", "’",  "＋", "＜", "＞", "韓", "灸", "腱", "＆", "遜", "髭", "淋",
    "／", "￥", "％", "＊", "↑",  "α",  "餌", "鴨", "姑", "傘", "棚", "屁",
    "撥", "筐", "訛", "”",  "鵜", "雁", "昆", "塾", "焚", "媚", "棘", "哨",
    "×",  "槻", "綴", "釧", "醐", "采", "雀", "醍", "馳", "筈", "幌", "彗",
    "狗", "烏", "謂", "燭", "蹟", "悸", "薔", "薇", "賎", "桶", "汎", "柵",
    "函", "腺", "搭", "筑", "雛", "襞", "碇", "湛", "槍", "嗜", "≫"};