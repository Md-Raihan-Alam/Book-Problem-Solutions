#include<stdio.h>
int main(void)
{
    int i=0;
    displayDigit:
    i++;
    printf("%d ",i);
    if(i<10) goto displayDigit;
    return 0;
}