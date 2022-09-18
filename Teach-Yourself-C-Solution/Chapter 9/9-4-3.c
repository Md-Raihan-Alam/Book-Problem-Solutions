#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
    FILE *fp,*fp2;
    if(argc!=3){
        printf("Enter data correctly. file-name-1 file-name-2\n");
        exit(1);
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Error reading first file");
        exit(1);
    }
    if((fp2=fopen(argv[2],"w"))==NULL){
        printf("Error writing second file");
        exit(1);
    }
    char str[1000];
    while(!feof(fp)){
        if(ferror(fp)){
        printf("Error reading file one");
        exit(1);
        }else fgets(str,999,fp);
        if(ferror(fp2)){
            printf("Error writing file two");
            exit(1);
        }else fputs(str,fp2);
    }
    if(fclose(fp)==EOF){
        printf("Error closing first file");
        exit(1);
    }
    if(fclose(fp2)==EOF){
        printf("Error closing second file");
        exit(1);
    }
    return 0;
}