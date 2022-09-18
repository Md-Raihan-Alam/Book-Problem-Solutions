#include<stdio.h>
int factorialNum=1;
int fact(int num){
    if(num<=1) return factorialNum;
    else{
        factorialNum*=num;
        num--;
        fact(num);
    }
}
int main(void)
{
    printf("%d",fact(3));
    return 0;
}