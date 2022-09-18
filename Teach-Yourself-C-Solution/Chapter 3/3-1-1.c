#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    char ch;
    char minimumCharacter='z';
    for(i=0;i<10;i++){
        ch=getche();
        printf("\n");
        if(ch<minimumCharacter) minimumCharacter=ch;
    }
    printf("smallest value=%c",minimumCharacter);
    return 0;
}
