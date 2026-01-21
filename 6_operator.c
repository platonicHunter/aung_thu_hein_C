#include <stdio.h>

int main()
{
    // Arithmetic operator
    int a = 10, b = 5;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    a++; // a=a+1
    printf("%d\n", a++);
    b--; // b=b-1
    printf("%d\n", b);

    // Assignment operator(+=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=)
    int c = 10;
    c += 5; // c = c + 5;
    printf("%d\n", c);
    c -= 5; // c = c - 5;
    printf("%d\n", c);
    c *= 5; // c = c * 5;
    printf("%d\n", c);
    c /= 5; // c = c / 5;
    printf("%d\n", c);
    c %= 5; // c = c % 5;
    printf("%d\n", c);

    // Comparison operator(==, !=, >, <, >=, <=)(output=0 or 1)
    int d = 10, e = 5;
    printf("%d\n", d == e);
    printf("%d\n", d != e);
    printf("%d\n", d > e);
    printf("%d\n", d < e);
    printf("%d\n", d >= e);
    printf("%d\n", d <= e);

    // logical operator (&&(and(both true)), ||(or(at least one true)), !(not))(output=0 or 1)
    int mark = 60;
    int attendent = 75;
    printf("%d\n", mark > 50 && attendent > 50);
    printf("%d\n", mark > 65 || attendent > 50);
    printf("%d\n", !(mark > 50));

    //
    int x = 4, y = 5, z = 6;
    printf("%d\n", x * (y / z));
    return 0;
}
