#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp1,*fp2;
    int i;
    double d;
    if((fp1=fopen("VALUES.txt","rb"))==NULL){
        printf("Error reading binary mode file VALUES");
        exit(1);
    }
    if((fp2=fopen("COUNT.txt","rb"))==NULL){
        printf("Error reading binary mode file COUNT");
        exit(1);
    }
    fread(&i,sizeof i,1,fp2);
    printf("Count=%d",i);
    printf("\n");
    for(;i>0;i--){
        fread(&d,sizeof d,1,fp1);
        printf("%lf ",d);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}