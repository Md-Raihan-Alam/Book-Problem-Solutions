#include<stdio.h>
int main(void)
{
    int count;
    int right=0;
    int wrong=0;
    int answer;
    for(count=1;count<11;count++)
    {
        printf("What is %d+%d?Answer=",count,count);
        scanf("%d",&answer);
        if(answer==count+count){
            printf("\nRight\n");
            right++;
        }else{
            printf("\nWrong\n");
            wrong++;
        }
    }
    printf("You have got %d right and %d wrong",right,wrong);
    return 0;
}
