#include<stdio.h>
int main(void)
{
    int numberOne,numberTwo,option;
    printf("Enter two number.number 1=");
    scanf("%d",&numberOne);
    printf("number 2=");
    scanf("%d",&numberTwo);
    printf("\nWhat do you want? 1. Sum 2.Product");
    scanf("%d",&option);
    if(option==1){
        printf("Sum=%d",numberOne+numberTwo);
    }else{
        printf("Product=%d",numberOne*numberTwo);
    }
}
