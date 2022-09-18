#include<stdio.h>
int main(void)
{
    char names[100],telephoneNumber[100],dates[100];
    printf("Enter name,birth date(mm/dd/yy) and telephone number:");
    scanf("%s %s %s",&names,&dates,&telephoneNumber);
    printf("%50s %50s %50s",names,dates,telephoneNumber);
    return 0;
}