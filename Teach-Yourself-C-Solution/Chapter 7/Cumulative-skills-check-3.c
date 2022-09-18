#include<stdio.h>
void avg(float *f,int n)
{
    int i;
    float total=0;
    for(i=0;i<n;i++) total+=f[i];
    total/=n;
    printf("%f",total);
}
int main(void)
{
    float arr[5]={3.2,2.3,5.6,4.3,9.3};
    avg(arr,5);
    return 0;
}