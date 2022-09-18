#include<stdio.h>
#include<conio.h>
int main()
{
    while(1)
    {
        printf(".");
        if(kbhit()) break;
    }
    return 0;
}
