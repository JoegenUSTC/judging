#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

#define SORT_MAX_LEN 100

tDataNode* FindCmd(tDataNode * head, char * cmd)
{
    if(head == NULL || cmd == NULL)
    {
        return NULL;
    }
    tDataNode *p = head;
    while(p != NULL)
    {
        if(strcmp(p->cmd,cmd) == 0)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int ShowAllCmd(tDataNode * head)
{
    printf("Menu list:\n");
    tDataNode *q =head;
    while(q != NULL)
    {
        printf("%s - %s\n", q->cmd, q->desc);
        q = q->next;
    }
    return 0;
}

int Quit()
{
    exit(0);
}

int Help()
{
    ShowAllCmd(head);
    return 0;
}

int Judge()
{
    int A,B;
    printf("Please input two numbers:\n");
    scanf("%d",&A);
    scanf("%d",&B);
    char C = A > B ? '>' : (A == B ? '=' : '<');
    printf("the result is %d %c %d.\n", A, C , B);
    return 0;
}
