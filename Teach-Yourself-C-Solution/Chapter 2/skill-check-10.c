#include <stdio.h>
void Myfunc(int count, float balance, char ch);
int main(void)
{
    Myfunc(32, 94.54, 'a');
    return 0;
}
void Myfunc(int count, float balance, char ch)
{
    printf("%d ", count);
    printf("%f ", balance);
    printf("%c ", ch);
}