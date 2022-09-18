#include<stdio.h>
void o_t_c(int numberOfOunce);
int main(void)
{
    int ounces;
    printf("Enter total amount of ounces=");
    scanf("%d",&ounces);
    o_t_c(ounces);
    return 0;
}
void o_t_c(int numberOfOunce)
{
    float totalCup=numberOfOunce/8;
    printf("Total cup will be=%f",totalCup);
}
