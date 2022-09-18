#include<stdio.h>
double avg(void);
int main(void)
{
    printf("%f",avg());
    return 0;
}
double avg(void)
{
    float f[10],sum=0;
    int i;
    printf("Enter 10 floating points number:");
    for(i=0;i<10;i++) scanf("%f",&f[i]);
    for(i=0;i<10;i++) sum+=f[i];
    sum/=10;
    return sum;
}