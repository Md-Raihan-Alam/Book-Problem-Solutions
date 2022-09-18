#include<stdio.h>
#include<math.h>
double hypoten()
{
    double height,base,hypontenuse;
    printf("Enter the height");
    scanf("%lf",&height);
    printf("Enter the base:");
    scanf("%lf",&base);
    hypontenuse=sqrt((height*height)+(base*base));
    return hypontenuse;
}
int main(void)
{
    double hype=hypoten();
    printf("Hypontenuse=%lf",hype);
    return 0;
}
