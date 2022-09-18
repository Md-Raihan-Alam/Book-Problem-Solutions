#include<stdio.h>
int main()
{
    int numberOne,numberTwo;
    int option;
    printf("\n1.Adds\n2.Subtracts\nWhat do you want?(1/2):");
    scanf("%d",&option);
    printf("Enter number one:");
    scanf("%d",&numberOne);
    printf("Enter number two:");
    scanf("%d",&numberTwo);
    if(option==1){
        printf("Sum is %d",numberOne+numberTwo);
    }else{
        printf("Subracts is %d",numberOne-numberTwo);
    }
    return 0;
}
