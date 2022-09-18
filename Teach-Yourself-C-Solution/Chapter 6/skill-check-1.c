#include<stdio.h>
int main(void)
{
    int evenSum=0,oddSum=0,arr[10];
    int i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++) scanf("%d",&arr[i]);
    for(i=0;i<10;i++){
        if(arr[i]%2==0)
            evenSum+=arr[i];
        if(arr[i]%2!=0)
            oddSum+=arr[i];
    }
    printf("\nTotal Sum of even number=%d\n",evenSum);
    printf("Total Sum of odd numbers=%d\n",oddSum);
    return 0;
}
