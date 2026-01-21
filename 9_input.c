#include <stdio.h>

int main()
{
    // scanf()
    // %d for int (integer)
    // %f for float (floating-point number)
    // %c for char (single character)
    // %s for strings (character arrays)

    // int num1;
    // printf("Enter First number : ");
    // // input (&)
    // scanf("%d", &num1);
    // printf("First Number : %d.\n", num1);

    // float fnum;
    // printf("Enter FLoat number : ");
    // // input (&)
    // scanf("%f", &fnum);
    // printf("Float Number : %f.\n", fnum);

    // char oneChar;
    // printf("Enter character : ");
    // // input (&)
    // scanf(" %c", &oneChar); // space before %c
    // printf("Character : %c.\n", oneChar);

    // char firstName[10];
    // printf("Enter First Name : ");
    // // input () not include after space
    // scanf("%s", firstName);
    // printf("First Name  : %s.\n", firstName);

    // fgets
    char fullname[30];
    printf("Enter your name : ");
    // fgets(variable_name, size, stdin); stdin=standard input(keyboard)
    fgets(fullname, 30, stdin);
    printf("My name is %s.\n", fullname);
    return 0;
}
