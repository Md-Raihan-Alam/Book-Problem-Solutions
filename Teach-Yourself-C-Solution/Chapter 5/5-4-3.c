#include<stdio.h>
int main(void)
{
    int arr[][3]={
        {1,1,1},
        {2,4,8},
        {3,9,27},
        {4,16,64},
        {5,25,125},
        {6,36,216},
        {7,49,343},
        {8,64,512},
        {9,27,729}
    };
    int inputNumber;
    int i,j;
    printf("Enter the number:");
    scanf("%d",&inputNumber);
    for(i=0;i<10;i++){
    if(inputNumber==arr[i][0]) {
        printf("Square is %d Cube is %d\n",arr[i][1],arr[i][2]);
        break;
        }
    }
    return 0;
}