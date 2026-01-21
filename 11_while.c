#include <stdio.h>

int main()
{
    // int count = 0;
    // while (count < 101)
    // {
    //     printf("%d\n", count);
    //     count += 10;
    // }

    // 3 * 1=3
    // 3 * 2=6
    // 3 * 3=9
    // 3 * 4=12
    // 3 * 5=15
    int fixmultiple = 12, count = 1;

    while (count < 13)
    {
        printf("%d * %d = %d\n", fixmultiple, count, count * fixmultiple);
        count++;
    }

    return 0;
}
