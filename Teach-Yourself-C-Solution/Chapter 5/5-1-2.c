#include<stdio.h>
int main(void)
{
    int arr[10];
    int i,j;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++) scanf("%d",&arr[i]);
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j]) printf("Match for %d and %d and their value is %d\n",i,j,arr[i]);
        }
    }   
    return 0;
}