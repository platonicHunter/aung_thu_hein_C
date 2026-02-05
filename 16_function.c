#include "stdio.h"

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // function(parameters)
    // int functionName (int parameterName,str[] parameterName)
    // {
    // arguments(call parameter)
    // code
    // }
    printf("%d", add(6, 7));
    printf("%d", add(16, 7));
    printf("%d", add(16, 57));
    return 0;
}
