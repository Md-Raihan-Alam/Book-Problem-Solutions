#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i;
    int j;
    int sum;
    if(argc!=3){
        printf("Enter two numbers");
        exit(1);
    }else{
        i=atoi(argv[1]);
        j=atoi(argv[2]);
        sum=i+j;
        printf("Total sum of %d and %d is %d\n",i,j,sum);
    }
    return 0;
}