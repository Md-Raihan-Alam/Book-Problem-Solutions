#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[80];
    printf("Enter string:");
    gets(str);
    int i;
    int spaces=0,commas=0,periods=0;
        for(i=0;i<strlen(str);i++){
            switch(str[i]){
                case ' ':
                    spaces++;
                    break;
                case ',':
                    commas++;
                    break;
                case '.':
                    periods++;
                    break;
                default:
                    break;
            }
        }
    printf("Spaces=%d,Commans=%d,Periods=%d",spaces,commas,periods);
    return 0;
}