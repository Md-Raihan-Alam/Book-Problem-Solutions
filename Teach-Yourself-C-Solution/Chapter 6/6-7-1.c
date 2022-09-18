#include<stdio.h>
void mystrcat(char *to,char *from)
{
    while(*from) *to++=*from++;
    *to='\0';
}
int main(void)
{
    char str[80];
    mystrcat(str,"This is string");
    puts(str);
    return 0;
}