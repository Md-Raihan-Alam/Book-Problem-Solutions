#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{
    char hiddenStr[]="concatenation";
    char shownStr[]="-------------";
    printf("Enter characters to find the hidden string.\nHidden word=%s\nEnter character:",shownStr);
    int totalTimes=0;
    char ch;
    for(;;){
        int finish=1;
        ch=getche();
        totalTimes++;
        for(int i=0;i<strlen(hiddenStr);i++){
            if(ch==hiddenStr[i] && shownStr[i]=='-'){
                shownStr[i]=hiddenStr[i];
                break;
            }
        }
        printf("\nRepeat=%s\n",shownStr);
        for(int i=0;i<strlen(shownStr);i++){
            if(shownStr[i]=='-') 
                finish=0;
        }
        if(finish==1) break;
    }
    if(totalTimes<=15){
        printf("\nYou win because you took less than or equal to 15 characters\n");
    }else{
        printf("\nYou win because you took greater than 15 character. You took %d times\n",totalTimes);
    }
    return 0;
}