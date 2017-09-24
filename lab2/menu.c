#include<stdio.h>
#include<stdlib.h>
void HelpCommand()
{
    printf("This is help cmd!\n");
}
void Quit()
{
    exit(0);
}
void Hello()
{
    printf("Hello Commander! You can use the cmd!\n");
}
void Passwd()
{
    printf("Your new password is:\n");
}
void Version()
{
    printf("version:12.04\n");
}
void Open()
{
    printf("file opened!\n");
}
void Close()
{
    printf("file closed!\n");
}
void Ls()
{
    printf("*-help\n");
    printf("*-version\n");
    printf("*-open\n");
    printf("*-close\n");
    printf("*-hello\n");
    printf("*-passwd\n");
    printf("*-quit\n");
}

int main()
{
    char cmd[128];
    while(1)
    {
        scanf("%s",cmd);
        if(strcmp(cmd,"help") == 0)
        {
            HelpCommand();
        }
        else if(strcmp(cmd,"passwd") == 0)
        {
            Passwd();
        }
        else if(strcmp(cmd,"version") == 0)
        {
            Version();
        }
        else if(strcmp(cmd,"open") == 0)
        {
            Open();
        }
        else if(strcmp(cmd,"close") == 0)
        {
            Close();
        }
        else if(strcmp(cmd,"hello") == 0)
        {
            Hello();
        }
        else if(strcmp(cmd,"help.ls") == 0)
        {
            Ls();
        }
        else if(strcmp(cmd,"quit") == 0)
        {
            Quit();
        }
        else 
        {
            printf("wrong cmd!\n");
        }

    }
}

