#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[1000];
    while(strcmp(str,"quit")){
        gets(str);
        puts(str);
    }
    return 0;
}