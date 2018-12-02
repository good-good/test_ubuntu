#include"progress.h"
void progress()
{
    int count = 0;
    char str[102];
    const char* label="|/-\\";
    memset(str,'\0',sizeof(str));
    while(count<=100)
    {
        str[count] = '#';
        printf("[%-100s][%d%%][%c]\r",str,count++,label[count%4]);
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
}