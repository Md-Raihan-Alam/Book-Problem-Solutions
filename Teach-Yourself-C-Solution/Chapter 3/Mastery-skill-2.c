#include<stdio.h>
int main(void)
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    if(i>0){
        printf("It is a positive number");
    }else{
        if(i<0)
            printf("It is a negative number");
        else
            printf("It is zero");
    }
}
