#include<stdio.h>
int currentNumber=21;
int series(int previousNumber);
int main(void)
{
    int i;
    for(i=0;i<9;i++) printf("%d ",series(currentNumber));
    return 0;   
}
int series(int previousNumber){
    int nextNumber=(previousNumber*1468)% 467;
    currentNumber=nextNumber;
    return nextNumber;
}