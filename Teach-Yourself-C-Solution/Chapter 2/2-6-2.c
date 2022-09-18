#include<stdio.h>
int main(void)
{
    int i;
    int beginNumber;
    printf("Enter the number you want to begin with:");
    scanf("%d",&beginNumber);
    for(i=beginNumber;i>=0;i--)
    {
        printf("%d\n",i);
        if (i==0) printf("\a");
    }
    return 0;
}
