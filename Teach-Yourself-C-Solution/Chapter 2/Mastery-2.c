#include<stdio.h>
int main(void)
{
    int total=0;
    int room;
    int width,len;
    int i;
    printf("Enter the amount of rooms:");
    scanf("%d",&room);
    for(i=room;i>0;i--)
    {
        printf("Enter the length:");
        scanf("%d",&len);
        printf("Enter the width:");
        scanf("%d",&width);
        total+=len*width;
    }
    printf("Total square footage of house is %d",total);
    return 0;
}
