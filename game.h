#define InitWidth 480
#define InitHeight 320
#define XMAX 15
#define YMAX 10
#define MOVESIZE 16
#define IMGSIZE 32

#define DICEMAX 6
#define PROPERTMAX 6

#define PLAYERNUM 3 
#define STATIONNUM 5
#define MAXMONTH 12
#define INITX 4*IMGSIZE
#define INITY 3*IMGSIZE
#define INITMONEY 1000

#define MAP_NUM 6

#define RESHAPETIME 500
#define MOVETIME 100
#define RANDTIME 100

#define JPMAX 75
#define SPMAX 24
#define NAMEMAX 10
#define STRMAX 40

// プレイヤーの情報構造体
struct playerstatus{
    char name[NAMEMAX];
    int money;
    int assets;
    int x;
    int y;
};

typedef struct playerstatus player;
player players[PLAYERNUM];

// 物件情報構造体
struct propertystatus{
    char name[STRMAX];
    int nameAttribute;
    int holder;
    int price;
    int earnings;
};

typedef struct propertystatus property;

// 駅情報構造体
struct stationstatus{
    char name[STRMAX];
    int x;
    int y;
    int ismonopoly;
    int propertynum;
    property plist[PROPERTMAX];
};

typedef struct stationstatus station;
station stations[STATIONNUM];
station distination;

// 画像用変数
GLuint mapimg[MAP_NUM];
pngInfo mapinfo[MAP_NUM];
GLuint playerimg[PLAYERNUM];
pngInfo playerinfo[PLAYERNUM];
GLuint diceimg[DICEMAX];
pngInfo diceinfo[DICEMAX];

// 日本語画像
GLuint hblackimg[JPMAX+SPMAX];
pngInfo hblackinfo[JPMAX+SPMAX];
GLuint hredimg[JPMAX+SPMAX];
pngInfo hredinfo[JPMAX+SPMAX];
GLuint kblackimg[JPMAX];
pngInfo kblackinfo[JPMAX];
GLuint kredimg[JPMAX];
pngInfo kredinfo[JPMAX];

// 年月管理
int month,year;
// 誰のターンか判別
int turn;
// ターンの状況
int turnstatus;
// 向き
int direction;
// 次の停車位置座標
int nx;
int ny;
// キーボードフラグ
int keyboardflg;
int keyboardflgformove;
// 残り移動可能マス
int recount;
int sold;

// 乱数生成用
int randflg;
int range;
int randresult;
int dummyresult;

int tmpmoney;
int onetime;
int inflg;
int goalflg;
int rdebet;

// 物件を買うときの変数
int selectpos;
int stid;
int propertynum;

// 移動したマスを記録
int massRecord[DICEMAX][2];

void Reshape(int, int);
void Timer(int);
void keyboardTimer(int);
void MoveTimer(int);
void RandTimer(int);
void PutSprite(int, int, int, pngInfo *,double);
int isMovable(int,int);
void move(void);
void nextStation(int,int);
void keyboard(unsigned char,int x,int y);

void Display(void);

void readImg(void);
int getmapnum(int,int);
void drawMap(void);
void drawPlayer(void);

void drawChar(int,int,int,int,int,double);
void drawString(char *,int,int,int,double);

void Initvalue(void);
void InitPlayer(void);
void dispPlayer(int);

void dispmassRecord(void);

void drawDialog(int,int,int,int);
void drawQUAD(int,int,int,int);
void drawMoney(int,int,int,int,double);
void drawText(char *,int,int,int,int,int);
void drawStation(void);

int debtprocess(void);

void readStation(void);
void readProperty(void);
void dispStation(int);
