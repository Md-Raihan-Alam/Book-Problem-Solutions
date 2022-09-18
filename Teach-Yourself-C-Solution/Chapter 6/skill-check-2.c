#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100],password[]="Tristan";
    printf("Enter the password:");
    int i=1;
    while(i<=3){
        gets(str);
        if(strcmp(str,password)==0){
            printf("Log on Successful\n");
            break;
        }
        else{
            printf("Wrong password.\n");
            i++;
        }
    }
    if(i==4) printf("Access Denied");
    return 0;
}
