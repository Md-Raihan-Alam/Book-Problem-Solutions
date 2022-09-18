#include<stdio.h>
int main(void)
{
    int i,*p;
    p=&i;
    *p=123;
    printf("%d",*p);
    return 0;
}