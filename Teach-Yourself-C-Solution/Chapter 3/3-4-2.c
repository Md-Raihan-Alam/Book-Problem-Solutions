#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Enter the message:");
    printf("\nEncoded=\n");
    ch=getch();
    while(ch!='\r'){
        printf("%c",ch+1);
        ch=getch();
    }
    printf("\nDecoded=(Enter the same message you got back in encoded)\n");
    ch=getch();
    while(ch!='\r'){
        printf("%c",ch-1);
        ch=getch();
    }
    return 0;
}
