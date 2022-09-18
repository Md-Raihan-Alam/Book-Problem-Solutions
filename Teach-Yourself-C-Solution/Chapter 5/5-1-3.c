#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float item[100];
    int a,b,t;
    int count;
    //read in numbers
    printf("How many number? ");
    scanf("%d",&count);
    for(a=0;a<count;a++) scanf("%f",&item[a]);
    //now sort item usin a bubble sort
    for(a=1;a<count;++a)
        for(b=count-1;b>=a;--b){
            //comare adjacent elements
            if(item[b-1]>item[b]){
                //exchange elements
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
        }
    //disply sorted list
    for(t=0;t<count;t++) printf("%f ",item[t]);
    return 0;
}