#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i=0;
    char ch;
    do{
        printf("Enter a character:");
        ch=getch();
        printf("\n%c ASCII Code is %d\n",ch,ch);
        i++;
    }while(i<10);
    return 0;
}
