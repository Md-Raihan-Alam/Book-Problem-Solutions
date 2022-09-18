#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Enter backspace,tabs or newlines and press q to quit:");
    while(ch!='q')
    {
        ch=getche();
        switch (ch)
        {
        case '\b':
            printf("\nEntered backspaces\n");
            break;
        case '\t':
            printf("\nEntered Tab\n ");
            break;
        case '\r':
            printf("\nEntered new line\n");
            break;
        default:
            printf("\nEnter backspace,tabs or newlines\n");
            break;
        }
    }    
    return 0;
}