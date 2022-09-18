#include<stdio.h>
int main(void)
{
    int i;
    do{
        printf("\nConvert:\n\t1.feet to meters\n\t2.meters to feet\n\t3.ounces to pounds\n\t4.pounds to ounces\n\t5.Quit\nEnter the number of choice:");
        scanf("%d",&i);
        if(i==1){
            int feet;
            printf("\nEnter the feet:");
            scanf("%d",&feet);
            printf("\n%d feet to meter is %f\n",feet,feet*0.3048);
        }else if(i==2){
            int meters;
            printf("\nEnter the meters:");
            scanf("%d",&meters);
            printf("\n%d meter to feet is %f\n",meters,meters*3.28084);
        }else if(i==3){
            int ounces;
            printf("\nEnter the ounces:");
            scanf("%d",&ounces);
            printf("\n%d ounces to pounds is %f\n",ounces,ounces*0.0625);
        }else if(i==4){
            int pound;
            printf("\nEnter the pounds:");
            scanf("%d",&pound);
            printf("\n%d pounds to ounces is %f\n",pound,pound*16);
        }else{
            printf("\nEnter valid number\n");
        }
    }while(i!=5);
    return 0;
}