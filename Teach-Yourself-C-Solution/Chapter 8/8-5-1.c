#include<stdio.h>
int main(void)
{
    int i;
    printf("%10s %10s %10s\n","Number","Square","Cube");
    for(i=2;i<=100;i++)
        printf("%10d %10d %10d\n",i,i*i,i*i*i);
    return 0;
}
