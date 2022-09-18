#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    char ch;
    printf("Tips for 10%%, 15%% and 20%%\n");
    for(i=1;i<=100;i++){
        printf("$%d tips for 10%% is %f\n",i,i*0.1);
        printf("$%d tips for 15%% is %f\n",i,i*0.15);
        printf("$%d tips for 20%% is %f\n",i,i*0.2);
        printf("\nQuit(Y):");
        ch=getche();
        if(ch=='Y') break;
        printf("\n");
    }
    return 0;
}
