#include<stdio.h>
int main(void)
{
    char str[20];
    printf("Enter floating point number:");
    scanf("%[0-9.]",&str);
    printf("%s",str);
    return 0;
}
