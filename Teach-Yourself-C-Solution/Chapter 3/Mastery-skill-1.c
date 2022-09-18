#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Keep entering uppercase character or press ENTER to stop the program:");
    while(ch!='\r'){
        ch=getche();
        printf("\nlowercase=%c\n",ch+32);
    }
    return 0;
}
