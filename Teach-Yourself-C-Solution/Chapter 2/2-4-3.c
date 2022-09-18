#include <stdio.h>
int main(void)
{
    int i;
    int lastNumber;
    printf("Enter a number=");
    scanf("%d", &lastNumber);
    for (i = 2; i < (lastNumber / 2) + 1; i = i + 1)
    {
        if (lastNumber % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
