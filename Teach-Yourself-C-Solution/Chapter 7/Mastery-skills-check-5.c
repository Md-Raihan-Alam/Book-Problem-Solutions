#include<stdio.h>
int main(int argc,char *argv[])
{
    if(argc!=2){
        printf("Enter data properly");
        return 0;
    }
    char *p;
    p=argv[1];
    while(*p){
        printf("%c",*p);
        p++;
    }
    return 0;
}