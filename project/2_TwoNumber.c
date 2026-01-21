#include <stdio.h>

int main()
{
    /* code */
    int num1, num2, sum, div, multiple, sub;
    // input and print in terminal
    printf("Enter your First number : ");
    scanf("%d", &num1);
    printf("Enter your Second number : ");
    scanf("%d", &num2);
    // operator
    sum = num1 + num2;
    sub = num1 - num2;
    multiple = num1 * num2;
    div = num1 / num2;
    // print output
    printf("%d + %d = %d \n", num1, num2, sum);
    printf("%d - %d = %d \n", num1, num2, sub);
    printf("%d * %d = %d \n", num1, num2, multiple);
    printf("%d / %d = %d \n", num1, num2, div);
    return 0;
}
