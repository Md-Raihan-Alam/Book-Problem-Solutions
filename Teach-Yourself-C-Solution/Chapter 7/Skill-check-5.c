#include<stdio.h>
int mystrlen(char *p)
{
    int i=-1;
    for(int j=0;p[j]!=0;j++){
        i++;
    }
    return i;
}
int main(void)
{
    int len=mystrlen("This is a string");
    printf("%d\n",len);
    return 0;
}