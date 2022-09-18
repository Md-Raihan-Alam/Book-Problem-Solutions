#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp1,*fp2;
    double d;
    int i=0;
    if((fp1=fopen("VALUES.txt","wb"))==NULL){
        printf("Failed to write binary mode for VALUES.txt");
        exit(1);
    }
    if((fp2=fopen("COUNT.txt","wb"))==NULL){
        printf("Failed to write binary mode for COUNT.txt");
        exit(1);
    }
    while(d!=0.0 && i<32767){
        printf("Enter a double value(0 to quit):");
        scanf("%lf",&d);
        fwrite(&d,sizeof d,1,fp1);
        i++;
    }
    printf("%d",i);
    fwrite(&i,sizeof i,1,fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}