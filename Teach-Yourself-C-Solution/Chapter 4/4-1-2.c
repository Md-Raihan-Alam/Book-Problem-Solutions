#include<stdio.h>
int main(void)
{
    unsigned long int distance;
    float totalTime;
    printf("Enter the distance:");
    scanf("%lu",&distance);
    totalTime=distance/186000;
    printf("Total Time=%f",totalTime);
    return 0;
}