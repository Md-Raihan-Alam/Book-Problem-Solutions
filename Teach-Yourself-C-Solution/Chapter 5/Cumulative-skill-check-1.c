#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[80];
    printf("Enter string:");
    gets(str);
    int i=strlen(str);
    if(i<80){
        for(;;){
            strcat(str,".");
            if(strlen(str)==80) break;
        }
    }
    puts(str);
    return 0;
}