#include <stdio.h>
void convert(void);
int main(void)
{
    convert();
    return 0;
}
void convert(void)
{
    float dollarAmount;
    float poundAmount;
    printf("Enter the amount in dollars=");
    scanf("%f", &dollarAmount);
    poundAmount = dollarAmount / 2;
    printf("The converted amount in pound is %f", poundAmount);
}
