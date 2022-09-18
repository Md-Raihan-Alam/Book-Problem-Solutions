#include<stdio.h>
int main(void)
{
    char str[20];
    printf("Enter string:");
    scanf("%*[0-9]%s",str);
    printf(str);
    return 0;
}