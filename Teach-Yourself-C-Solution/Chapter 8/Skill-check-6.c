#include<stdio.h>
int main(int argc,char *argv[])
{
    printf("Total arguments=%d",argc);
    printf("\nlast content=%s",argv[argc-1]);
    return 0;
}
