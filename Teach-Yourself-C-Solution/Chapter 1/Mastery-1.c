#include<stdio.h>
int main(void)
{
    float userWeight;
    float weightInMoon;
    printf("Enter your weight:");
    scanf("%f",&userWeight);
    weightInMoon=userWeight*0.17;
    printf("Your weight in the moon is %f",weightInMoon);
    return 0;
}
