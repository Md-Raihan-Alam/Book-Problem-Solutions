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
    for(i=0;i<drivingComputationTime;i++){
        printf("\nEnter the total distance:");
        scanf("%f",&totalDistance);
        printf("\nEnter total average speed:");
        scanf("%f",&averageSpeed);
        totalDrivingTime=totalDistance/averageSpeed;
        printf("\nTotal Driving Time is %f",totalDrivingTime);
    }
    return 0;
}
