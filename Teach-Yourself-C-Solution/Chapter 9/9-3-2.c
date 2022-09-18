#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp,*fp2,*fp3;
    char ch;
    if(argc!=3){
        printf("Enter data correctly. program-name file1 file2");
        exit(1);
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Error reading file");
        exit(1);
    }
    if((fp2=fopen("temp.txt","w"))==NULL){
        printf("Error creating temp file");
        exit(1);
    }
    printf("Reading file from file 1 to temp file\n");
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("Running...");
        if(ferror(fp)){
            printf("Error in file");
            exit(1);
        }
        if(!feof(fp)) fputc(ch,fp2);
    }
    fclose(fp);
    fclose(fp2);
    if((fp3=fopen(argv[2],"r"))==NULL){
        printf("error reading file2");
        exit(1);
    }
    if((fp=fopen(argv[1],"w"))==NULL){
        printf("error writing file");
        exit(1);
    }
    printf("\nReading file from file 2 to file 1\n");
    while(!feof(fp3)){
        ch=fgetc(fp3);
        printf("Running...");
        if(ferror(fp3)) {
            printf("Error in file 2");
            exit(1);
        }
        if(!feof(fp3)) fputc(ch,fp);
    }
    fclose(fp);
    fclose(fp3);
    if((fp2=fopen("temp.txt","r"))==NULL){
        printf("Error reading temp file");
        exit(1);
    }
    if((fp3=fopen(argv[2],"w"))==NULL){
        printf("Error writing file 2");
        exit(1);
    }
    printf("Reading file from temp file to file 1\n");
    while(!feof(fp2)){
        ch=fgetc(fp2);
        printf("Running");
        if(ferror(fp2)){
            printf("Error reading temp file");
            exit(1);
        }
        if(!feof(fp2)) fputc(ch,fp3);
    }
    fclose(fp2);
    fclose(fp3);
    return 0;
}