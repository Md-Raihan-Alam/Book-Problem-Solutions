#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;
    if(argc!=2){
        printf("Enter Program File");
        exit(1);
    }
    if((fp=fopen(argv[1],"rb"))==NULL){
        printf("Error reading file");
        exit(1);
    }
    unsigned count=0;
    while(!feof(fp)){
        fgetc(fp);
        if(ferror(fp)){
            printf("Error reading file byte");
            exit(1);
        }
        count++;
    }
    printf("Total byte %u bytes",count-1);
    fclose(fp);
    return 0;
}