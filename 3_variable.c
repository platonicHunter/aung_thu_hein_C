#include <stdio.h>

int main()
{
    // Keywords:
    // 1 - char  (single character) → 'A' |  (multiple character) → []="hello"
    // 2 - int   (integer numbers) → 123, -4, 0
    // 3 - float (decimal numbers) → 3.14, -0.5

    // Variable name rules:
    // 1 - Cannot start with number and special caharacter -> 2name,#name
    // 2 - Cannot contain spaces → your name
    // 3 - Cannot use C keywords → int, float, return
    // 4 - Style rule: use lowercase first letter (not compiler rule)

    // Naming styles:
    // camelCase: myNumber, myFatherName
    // snake_case: my_number, my_father_name

    char myName = 'H';
    char myName2[] = "Htoo Myat Naing";
    int my_number = 55;
    float my_number2 = 55.55;

    // output
    // %d -> int
    // %f -> float
    // %c -> character
    // %s -> multiple character

    printf("%d\n", my_number);
    printf("%f\n", my_number2);
    printf("%c\n", myName);
    printf("%s\n", myName2);
    return 0;
}
