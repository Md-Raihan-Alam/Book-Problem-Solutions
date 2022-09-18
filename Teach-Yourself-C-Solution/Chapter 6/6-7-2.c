#include<stdio.h>
int changeInt(int *i);
int main(void)
{
    int val;
    printf("Number:");
    scanf("%d",&val);
    changeInt(&val);
    printf("%d",val);
    return 0;
}
int changeInt(int *i){
    *i=-1;
    return *i;
}