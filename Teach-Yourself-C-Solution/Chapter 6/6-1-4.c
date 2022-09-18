#include<stdio.h>
int main(void)
{
    int i;
    for(i=0;i<10;i++){
        int *j=&i;
        printf("%d ",*j);
    }
    return 0;
}
