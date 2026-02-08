#include <stdio.h>

int main()
{
    int marks[10] = {50, 60, 70, 55, 40, 5, 77, 41, 100, 55};
    // printf("%d\n", marks[0]);
    // printf("%d\n", marks[1]);
    // printf("%d\n", marks[2]);
    // printf("%d\n", marks[3]);
    // printf("%d\n", marks[4]);
    // printf("%d\n", marks[5]);
    // printf("%d\n", marks[6]);
    // printf("%d\n", marks[7]);
    // printf("%d\n", marks[8]);
    // printf("%d\n", marks[9]);

    // Array Loop
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", marks[i]);
    // }

    // pointer one value
    int *pMark = &marks[0];
    printf("address : %p\n", pMark);
    printf("value of address : %d\n", *pMark);
    pMark++;
    printf("address : %p\n", pMark);
    printf("value of address : %d\n", *pMark);

    // for loop with pointer
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *pMark);
        pMark++;
    }

    return 0;
}
