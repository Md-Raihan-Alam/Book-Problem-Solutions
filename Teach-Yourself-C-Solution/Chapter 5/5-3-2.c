#include<stdio.h>
int main(void)
{
    int num[3][3][3];
    int i,j,k,n=1,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                num[i][j][k]=n;
                printf("%d ",num[i][j][k]);
                sum+=n;
                n++;
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\nTotal sum=%d",sum);
    return 0;
}