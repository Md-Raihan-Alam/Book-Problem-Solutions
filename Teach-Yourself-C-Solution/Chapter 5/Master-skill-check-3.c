#include<stdio.h>
int main(void)
{
    int arr[20],i,j;  
    for(i=0;i<20;i++) scanf("%d",&arr[i]);
    int limit=0,lastLimit=0,mode;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(arr[i]==arr[j]){
                limit++;
            }
        }
        if(limit>lastLimit){
            lastLimit=limit;
            mode=arr[i];
        }
        limit=0;
    }
    printf("Mode=%d",mode);
    return 0;
}