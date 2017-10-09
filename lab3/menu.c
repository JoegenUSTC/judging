#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

#define CMD_MAX_LEN 128

int main()
{
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Input a cmd number >");
        scanf("%s",cmd);
        tDataNode *p = FindCmd(head, cmd);
        if(p == NULL)
        {
            printf("\tThis is a wrong cmd!\n");
            continue;
        }
        printf("\t%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
}
