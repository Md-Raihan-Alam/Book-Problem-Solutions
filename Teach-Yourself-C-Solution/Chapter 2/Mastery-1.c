#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    srand(time(0));
    int mysteryNumber=rand()%100;
    int i;
    int userNumber;
    printf("Welcome to guess the magic number.\n");
    for(i=0;i<10;i++){
        printf("Guess the number=");
        scanf("%d",&userNumber);
        if(userNumber==mysteryNumber){
            printf("RIGHT.You have guessed the correct number at %d times\a",i+1);
            break;
            return 0;
        }
        if(userNumber>mysteryNumber){
            printf("You have guessed higher than mystery number\n");
        }else{
            printf("You have guessed lower than mystery number\n");
        }
    }
    return 0;
}
