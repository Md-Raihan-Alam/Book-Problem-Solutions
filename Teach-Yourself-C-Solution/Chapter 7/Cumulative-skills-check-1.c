#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    if(argc!=2){
        printf("Enter data propery");
        return 0;
    }
    if(strcmp(argv[1],"IIUC")==0){
        printf("Access Permitted");
    }else{
        printf("Access Denied");
    }
    return 0;
}