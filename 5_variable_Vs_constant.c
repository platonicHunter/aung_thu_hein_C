#include <stdio.h>

int main()
{
    /* code */
    int age = 55;
    age = 20; // reassign
    printf("%d\n", age);

    // constant (cannot reassign)
    const int x = 60;
    // x = 20;// error
    printf("%d\n", x);
    return 0;
}
