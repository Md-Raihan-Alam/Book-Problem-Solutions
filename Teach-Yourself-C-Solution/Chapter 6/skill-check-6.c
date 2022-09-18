#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[][2][1000]={
        {"Raihan","01321814174"},
        {"Rimon","01743250255"},
        {"Abdul","01258525414"},
        {" "," "}
    };
    char enterName[100];
    printf("Enter name:");
    gets(enterName);
    int i;
    i=0;
    while(strcmp(str[i][0]," ")){
        if(strcmp(enterName,str[i][0])==0){
            printf("Phone number is %s",str[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(str[i][0]," ")){
        printf("Not in dictionary\n");
    }
    return 0;
}
