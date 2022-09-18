#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    for(;;){
        ch=getche();
        if(ch=='\r') break;
        printf("\n%c\n",ch);
    }
    return 0;
}