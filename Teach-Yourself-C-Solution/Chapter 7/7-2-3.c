#include<stdio.h>
void str(char *p)
{
    if(*p){
        printf("%c",*p);
        str(p+1);
    }
}
int main(void)
{
    str("Hello, I am Raihan");
    return 0;
}