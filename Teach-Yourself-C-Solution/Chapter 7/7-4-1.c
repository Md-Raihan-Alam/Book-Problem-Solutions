#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    // printf("%d\n",argc);
    if(argc!=3){
        printf("Enter two strings");
    }else{
        if(strcmp(argv[1],argv[2])>1){
            printf("%s is greater than %s",argv[1],argv[2]);
        }else if(strcmp(argv[1],argv[2])==0){
            printf("%s is same as %s",argv[1],argv[2]);
        }else{
            printf("%s is less than %s",argv[1],argv[2]);
        }
    }
    return 0;
}