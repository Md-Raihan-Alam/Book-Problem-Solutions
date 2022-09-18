#include<stdio.h>
int main(void)
{
    int drivingComputationTime;
    int i;
    float totalDistance;
    float averageSpeed;
    float totalDrivingTime;
    printf("Enter how many times you want to compute driving time:");
    scanf("%d",&drivingComputationTime);
    i=0;
    while(i<drivingComputationTime){
        printf("\nEnter the total distance:");
        scanf("%f",&totalDistance);
        printf("\nEnter total average speed:");
        scanf("%f",&averageSpeed);
        totalDrivingTime=totalDistance/averageSpeed;
        printf("\nTotal Driving Time is %f",totalDrivingTime);
        i++;
    }
    return 0;
}
