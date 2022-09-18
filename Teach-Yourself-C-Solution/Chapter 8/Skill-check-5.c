#include<stdio.h>
int len=-1;
int rstrlen(char *p)
{
    if(*p==0){
        return len;
    }else{
       p++;
       len++;
       rstrlen(p++);
    }
}
int main(void)
{
    printf("%d",rstrlen("hello, I am Raihan"));
    return 0;
}
