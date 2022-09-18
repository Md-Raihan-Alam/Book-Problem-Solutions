#include <stdio.h>
int main(void)
{
    int yearValue;
    int fullyearSecond = 365 * 24 * 60 * 60;
    int totalSeconds;
    printf("How many years second you want?");
    scanf("%d", &yearValue);
    totalSeconds = fullyearSecond * yearValue;
    printf("Total seconds=%d", totalSeconds);
    return 0;
}
