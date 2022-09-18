#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    int totalPunch=0;
    int totalLetter=0;
    int totalDigit=0;
    while(ch!='\r'){
        printf("Enter a character:");
        ch=getche();
        switch(ch){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0:
            totalDigit++;
            break;
        case ',':
        case '.':
        case ':':
        case ';':
        case '?':
        case '!':
            totalPunch++;
            break;
        default:
            totalLetter++;
            break;
        }
        printf("\nContinue or Quit(ENTER):");
        ch=getch();
        printf("\n");
    }
    printf("\nTotal punctuation:%d\n",totalPunch);
    printf("\nTotal letter:%d\n",totalLetter);
    printf("\nTotal Digit:%d\n",totalDigit);
    return 0;
}
