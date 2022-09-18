#include<stdio.h>
#include<conio.h>
int main(void)
{
    int gallons;
    float liters;
    char ch;
    do{
        printf("Enter gallons amount:");
        scanf("%d",&gallons);
        liters=gallons*3.7854;
        printf("Total %f",liters);
        printf("\nPress any key to continue or \"q\" to exit.\n");
        ch=getche();
        printf("\n");
    }while(ch!='q');
    return 0;
}
