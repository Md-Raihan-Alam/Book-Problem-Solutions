#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;
    int totalA=0,totalB=0,totalC=0,totalD=0,totalE=0,totalF=0,totalG=0,totalH=0,totalI=0,totalJ=0,totalK=0,totalL=0,totalM=0,totalN=0,totalO=0,totalP=0,totalQ=0,totalR=0,totalS=0,totalT=0,totalU=0,totalV=0,totalW=0,totalX=0,totalY=0,totalZ=0;
    if(argc!=2){
        printf("Enter data properly");
        exit(1);
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Error reading the file");
        exit(1);
    }
    for(;;){
        if((ch=fgetc(fp))==EOF) break;
        char newCh=tolower(ch);
        if(newCh=='a') totalA++;
        else if(newCh=='b') totalB++;
        else if(newCh=='c') totalC++;
        else if(newCh=='d') totalD++;
        else if(newCh=='e') totalE++;
        else if(newCh=='f') totalF++;
        else if(newCh=='g') totalG++;
        else if(newCh=='h') totalH++;
        else if(newCh=='i') totalI++;
        else if(newCh=='j') totalJ++;
        else if(newCh=='k') totalK++;
        else if(newCh=='l') totalL++;
        else if(newCh=='m') totalM++;
        else if(newCh=='o') totalO++;
        else if(newCh=='p') totalP++;
        else if(newCh=='q') totalQ++;
        else if(newCh=='r') totalR++;
        else if(newCh=='s') totalS++;
        else if(newCh=='t') totalT++;
        else if(newCh=='u') totalU++;
        else if(newCh=='v') totalV++;
        else if(newCh=='w') totalW++;
        else if(newCh=='x') totalX++;
        else if(newCh=='y') totalY++;
        else if(newCh=='z') totalZ++;
    }
    printf("A=%d\nB=%d\nC=%d\nD=%d\nE=%d\nF=%d\nG=%d\nH=%d\nI=%d\nJ=%d\nK=%d\nL=%d\nM=%d\nN=%d\nO=%d\nP=%d\nQ=%d\nR=%d\nS=%d\nT=%d\nU=%d\nV=%d\nW=%d\nX=%d\nY=%d\nZ=%d",totalA,totalB,totalC,totalD,totalE,totalF,totalG,totalH,totalI,totalJ,totalK,totalL,totalM,totalN,totalO,totalP,totalQ,totalR,totalS,totalT,totalU,totalV,totalW,totalX,totalY,totalZ);
    return 0;
}