typedef struct DataNode
{
    char*    cmd;
    char*    desc;
    int      (*handler)();
    struct   DataNode *next;
} tDataNode;

tDataNode* FindCmd(tDataNode * head, char * cmd);
int ShowAllCmd(tDataNode * head);

int Help();
int Quit();
int Judge();

static tDataNode head[] =
{
    {"help","This is help cmd!", Help, &head[1]},
    {"version","menu program v1.0", NULL,&head[2]},
    {"quit","exit from the menu.",Quit, &head[3]},
    {"judge","judge which number is smaller",Judge,&head[4]}
};

