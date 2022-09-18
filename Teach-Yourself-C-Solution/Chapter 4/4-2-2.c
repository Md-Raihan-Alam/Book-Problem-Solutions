#include<stdio.h>
float soundspeed(float distance);
///void soundspeed(void);->non-general function
int main(void)
{
    float totalDistance;
    print("Enter total distance in feet:");
    scanf("%f",&totalDistance);
    soundespeed(totalDistance);
    return 0;
}
float soundspeed(float distance){
    print("Total time needed=%f",distance/1129);
}
// non general function
// void soundspeed(void){
//     float totalDistance;
//     print("Enter total distance in feet:");
//     scanf("%f",&totalDistance);
//     print("Total time needed=%f",totalDistance/1129);
// }