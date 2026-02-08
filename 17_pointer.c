#include <stdio.h>

int main()
{
    // pointer(&)=> a "variable-like" taht holds a memory address

    int age = 2;
    printf("value : %d\n", age);
    printf("address : %p\n", &age); // memory address

    // pointer declaration(*)
    int *pAge = &age;
    printf("value of pAge : %p\n", pAge);
    printf("value of stored address pAge : %d\n", *pAge);
    return 0;
}
