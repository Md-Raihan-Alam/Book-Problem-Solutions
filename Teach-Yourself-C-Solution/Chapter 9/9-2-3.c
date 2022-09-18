#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    FILE *fp,*fp2;
    char ch,ch2;
    int watch=0;
    if(argc<2){
        printf("Enter data correctly.<file name> <file name> <extra input(\"watch\")\n");
        exit(1);
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("File is not found");
        exit(1);
    }
    if(strcmp(argv[3],"watch")==0){
        watch=1;
    }
    if((fp2=fopen(argv[2],"w"))==NULL){
        printf("Error creating file");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF){
        fputc(ch,fp2);
        if(watch) putchar(ch);
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}