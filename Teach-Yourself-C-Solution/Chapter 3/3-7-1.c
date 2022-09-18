#include<stdio.h>
int main(void)
{
    int i=0;
    for(;i<=10;i++){
        printf("%d ",i);
        if(i==2) break;
    }
    while(i<=10){
        if(i==5) break;
        printf("%d ",i);
        i++;
    }
    do{
        if(i==8) break;
        printf("%d ",i);
        i++;
    }while(i<=10);
    return 0;
}