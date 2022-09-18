#include<stdio.h>
int main(void)
{
    char str[100];
    int i,num;
    double d;
    printf("Enter a string,integer & double value:");
    scanf("%s%d%lf%n",str,&i,&d,&num);
    printf("Total character=%d",num);
    return 0;
}
