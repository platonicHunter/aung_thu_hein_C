#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* code */
    // 1. if (condition){}
    // 2. if (condition){} else {}
    // 3. if (condition){} else if{}  else if{} else{}
    // 4. (condition) ? true : false;

    int money = 5000;
    int earPhone = 4000;
    // if (money > earPhone)
    // {
    //     printf("You can buy earphone");
    // };

    // if (money > earPhone)
    // {
    //     printf("You can buy earphone");
    // }
    // else
    // {
    //     printf("Money is not enough.");
    // };

    (money > earPhone) ? printf("You can buy earphone") : printf("Money is not enough.");

    printf("\n");
    int mark = 50;
    // if (mark >= 75)
    // {
    //     printf("Pass with Destination!!");
    // }
    // else if (mark <= 40)
    // {
    //     printf("Fail Exam");
    // }
    // else
    // {
    //     printf("Pass Exam");
    // };

    if (mark >= 75)
    {
        printf("A+");
    }
    else if (mark >= 70)
    {
        printf("A");
    }
    else if (mark > 64)
    {
        printf("B+");
    }
    else if (mark >= 60)
    {
        printf("B");
    }
    else if (mark >= 40)
    {
        printf("B");
    }
    else
    {
        printf("C");
    };

    printf("\n");
    int age = 22;
    bool isBuddish = true;
    bool isDebet = true;
    if (isBuddish)
    {
        printf("You can wear monk.");
        // nested if
        if (age >= 20)
        {
            // nested if
            (!isDebet) ? printf("U Zin.") : printf("Ko Yin.");
        }
        else
        {
            printf("Ko Yin.");
        }
    }
    else
    {
        printf("You cannot.");
    };

    return 0;
}
