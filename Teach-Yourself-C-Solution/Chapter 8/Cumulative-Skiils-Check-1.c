#include<stdio.h>
#define PLAYERSIZE 9
int main(void)
{
    char player[PLAYERSIZE][100];
    double playerBattingAverages[PLAYERSIZE];
    printf("Enter player name and batting averages.");
    for(int i=0;i<9;i++){
        printf("\nEnter player name:");
        scanf("%s",player[i]);
        printf("Enter player batting Averages:");
        scanf("%lf",&playerBattingAverages[i]);
     }
    for(int i=0;i<9;i++) printf("%s ",player[i]);
    double highestAverage=playerBattingAverages[0];
    int highestAverageId=0;
    double lowestAverage=playerBattingAverages[0];
    int lowestAverageId=0; 
    for(int i=0;i<9;i++){
        if(playerBattingAverages[i]>highestAverage) {
            highestAverageId=i;
            highestAverage=playerBattingAverages[i];
        }
        if(playerBattingAverages[i]<lowestAverage){
            lowestAverageId=i;
            lowestAverage=playerBattingAverages[i];
        }
    }
    printf("\nHgihest Batting Average Player name is %s and his batting average is %lf",player[highestAverageId],highestAverage);
    printf("\nLowest Batting Average Player name is %s and his batting averages is %lf",player[lowestAverageId],lowestAverage);
    double teamAverage=0;
    for(int i=0;i<9;i++) teamAverage+=playerBattingAverages[i];
    teamAverage/=9;
    printf("\nTotal teamp average:%lf",teamAverage);
    return 0;
}