#include <stdio.h>

int main()
{
    // more than one value
    // index always start with 0
    //              0  1  2
    int nums[3] = {22, 3, 4};
    printf("%d\n", nums[0]);
    printf("%d\n", nums[1]);
    printf("%d\n", nums[2]);

    // 2 Dimensional array
    int dim2[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };
    printf("2Dimensional arr : %d", dim2[0][1]);
    printf("2Dimensional arr : %d", dim2[1][2]);

    return 0;
}
