#include<stdio.h>
int main(void)
{
    int count[100][10],*p;
    p=count;
    *(p+(100*44)+8)=99;
    return 0;
}