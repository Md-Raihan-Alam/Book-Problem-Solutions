#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[80];
    printf("Enter string:");
    gets(str);
    int readOn=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ' && readOn==0) 
        {
            readOn=1;
            i++;
        }
        if(readOn) printf("%c",str[i]);
    }
    return 0;
}