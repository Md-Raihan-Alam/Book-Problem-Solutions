#include<stdio.h>
int main(void)
{
    double d;
    char ch;
    char str[20];
    printf("Enter character:");
    scanf("%c",&ch);
    printf("Enter double:");
    scanf("%lf",&d);
    printf("Enter string:");
    scanf("%.20s",str);
    printf("Double=%lf Character=%c string=%.20s",d,ch,str);
    return 0;
}