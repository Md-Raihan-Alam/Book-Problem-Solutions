#include<stdio.h>
int isPrime(int num)
{
    int prime=1;
    for(int j=2;j*j<=num;j++){
        if(num%j==0) prime=0;
    }
    if(prime==1) return 1;
    else return 0;
}
int main(void)
{
    int column=1;
    for(int i=2;i<=1000;i++){
        if(isPrime(i)==1) {
            printf("%5d",i);
            column++;
        }
        if(column==5) {
            printf("\n");
            column=1;
        }
    }
    return 0;
}