#include<stdio.h>
#include<string.h>
int main(void)
{
    char *p[]={
        "Yes",
        "No",
        "Maybe. Rephrase the question"
    };
    char quesStr[100];
    printf("Enter question:");
    gets(quesStr);
    int index=strlen(quesStr)%3;
    printf("%s",p[index]);
    return 0;
}