#include<stdio.h>
#include<ctype.h>
void string_up(char *p)
{
    while(*p){
        *p=toupper(*p);
        p++;
    }
}
int main(void)
{
    char str[80];
    printf("Enter a string:");
    gets(str);
    string_up(str);
    printf(str);
    return 0;
}