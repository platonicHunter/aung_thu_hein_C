#include <stdio.h>
int x, y;
int main()
{
    x = 50;
    y = 23;
    printf("x&y = %d\n", x & y);
    printf("x|y = %d\n", x | y);
    printf("x^y = %d\n", x ^ y);
    printf("~x = %d\n", ~x);
    return 0;
}