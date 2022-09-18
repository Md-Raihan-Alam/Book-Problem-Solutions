#include<stdio.h>
int main(void)
{
    char ch;
    for(ch='a';ch<='z';ch++){
        printf("%c ASCII Code is %d\n",ch,ch);
    }
    printf("\n");
    for(ch='A';ch<='Z';ch++){
        printf("%c ASCII Code is %d\n",ch,ch);
    }
    return 0;
}