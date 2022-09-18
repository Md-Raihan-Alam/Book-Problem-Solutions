#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    while(1){
        ch=getche();
        if(ch=='q'){
            printf("\nASCII Code of %c is %d\n",ch,ch);
            break;
        }
        printf("\nASCII Code of %c is %d\n",ch,ch);
    }
    return 0;
}
