#include<stdio.h>
int main(void)
{
    float first_number;
    float second_number;
    float third_number;
    float cube_of_volumn;
    printf("Program to calculate volume of cube\n");
    printf("Enter first number=");
    scanf("%f",&first_number);
    printf("Enter second number=");
    scanf("%f",&second_number);
    printf("Enter third number=");
    scanf("%f",&third_number);
    cube_of_volumn=first_number*second_number*third_number;
    printf("The volume of this cube is %f",cube_of_volumn);
    return 0;
}
