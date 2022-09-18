#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
    FILE *fp;
    char str[80];
    if((fp=fopen("Telephone.txt","r"))==NULL){
        printf("Error reading file");
        exit(1);
    }
    int i=0;
    while(!feof(fp)){
        fgets(str,79,fp);
        puts(str);
        i++;
        if(i==20){
            char ch;
            printf("Show more(Y/N)");
            scanf("%c",&ch);
            if(toupper(ch)=='N') break;
            i=0;
        }
    }
    return 0;
}