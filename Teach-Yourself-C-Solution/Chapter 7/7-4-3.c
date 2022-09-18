#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    if(argc!=4){
        printf("Please enter data properly");
        exit(1);
    }else{
        int i=atoi(argv[2]);
        int j=atoi(argv[3]);
        if(strcmp(argv[1],"add")==0){
            int sum=i+j;
            printf("Total sum is %d",sum);
        }else if(strcmp(argv[1],"subtract")==0){
            int sub=i-j;
            printf("Total subtract is %d",sub);
        }else if(strcmp(argv[1],"multiply")==0){
            int mul=i*j;
            printf("Total multiplication is %d",mul);
        }else if(strcmp(argv[1],"divide")==0){
            if(strcmp(argv[3],"0")==0) {
                printf("You can not enter 0");
                exit(1);
            }
            printf("Total divide is %f",atof(argv[2])/atof(argv[3]));
        }
    }
    return 0;
}