#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char str[100],bigstr[1000]="";
    printf("Enter string or input \'Quit\' to exit the loop\n");
    for(;;){
        if(strlen(str)+strlen(bigstr)>=1000) break;
        printf("Enter string:");
        gets(str);
        if(strcmp(str,"Quit")==0) break;
        strcat(bigstr,str);
    }
    puts(bigstr);
    return 0;
}