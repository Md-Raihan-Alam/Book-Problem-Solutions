#include<stdio.h>
int main(void)
{
    float f,*p;
    p=&f;
    *p=32.32;
    printf("%f",f);
    return 0;
}