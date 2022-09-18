#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch,*p;
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Error reading the file");
        exit(1);
    }
    for(;;){
        if((ch=fgetc(fp))==EOF) break;
        putchar(ch);
    }
    fclose(fp);
    return 0;
}