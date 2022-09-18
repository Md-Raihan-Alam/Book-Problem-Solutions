#include<stdio.h>
int displayAlpha(char ch)
{
    if(ch=='z'+1) return 0;
    else {
        printf("%c ",ch);
        ch++;
        displayAlpha(ch);
    }
}
int main(void)
{
    displayAlpha('a');
    return 0;
}