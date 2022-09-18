#include<stdio.h>
int main(void)
{
    int val,*p,**p2;
    p=&val;
    p2=&p;
    **p2=45;
    printf("Value=%d,address=%p,address of one pointer=%p,address of multi pointer=%p",val,&val,*p,**p2);
    return 0;
}