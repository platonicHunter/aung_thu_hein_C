#include <stdio.h>

int main()
{
    // Print the multiplication table of 5.
    // 5 x 1 = 5
    // 5 x 2 = 10
    // ---------
    // 5 x 12 = 60
    // printf("multiplication table of 5\n");
    // for (int i = 1; i <= 12; i++)
    // {
    //     printf("5 x %d = %d\n", i, 5 * i);
    // }

    // Find the sum of numbers from 1 to 10.
    // 1 + 2 + 3 + 4+... + 10 = 55
    // 1 + 2 =3
    // 3 + 3 =3
    // int sum = 0;
    // for (int i = 1; i < 11; i++)
    // {
    //     // sum = sum + i;
    //     sum += i;
    // }
    // printf("Sum of numbers 1 to 10 : %d\n", sum);

    // Find the sum of even numbers from 1 to 100.
    // 2+4+6+8+10+...+100=..
    // int sum2 = 0;
    // for (int i = 2; i < 101; i++)
    // {
    //     sum2 += i;
    // }
    // printf("Sum of numbers of even number 1 to 100 : %d\n", sum2);

    // Print the square of numbers from 1 to 10.
    // square(1 x 1=1,2 x2 =4,3x3=9)
    // Square number of 1 : 1
    // Square number of 2 : 4
    // Square number of 3 : 9

    // Print all numbers between 1 and 100 that are divisible by 3.
    for (int i = 1; i < 101; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
