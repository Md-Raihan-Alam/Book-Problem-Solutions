#include<stdio.h>
int main(void)
{
    char str[80],*p;
    int i,spaces=0;
    printf("Enter string:");
    gets(str);
    p=str;
    for(i=0;str[i]!=0;i++){
        if(*(p+i)==' ') spaces++;
    }
    printf("Number of spaces=%d",spaces);
    return 0;
}