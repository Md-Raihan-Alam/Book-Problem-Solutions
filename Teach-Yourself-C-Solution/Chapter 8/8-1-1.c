#include<stdio.h>
#define MAX 100
#define COUNTBY 3
int main(void)
{
    int i;
    for(i=0;i<MAX;i++)
        if(i%COUNTBY!=0) printf("%d ",i);
    return 0;
}
