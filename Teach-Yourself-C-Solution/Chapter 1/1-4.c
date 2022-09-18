#include <stdio.h>
int main(void)
{
    float first_number;
    float second_number;
    float sum;
    printf("Enter first number=");
    scanf("%f", &first_number);
    printf("Enter second number=");
    scanf("%f", &second_number);
    sum = first_number + second_number;
    printf("Total sum is %f", sum);
    return 0;
}