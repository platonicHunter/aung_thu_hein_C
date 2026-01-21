#include <stdio.h>

int main()
{
    int num = 0;
    switch (num)
    {
    case 1:
        printf("number 1\n");
        break;
    case 2:
        printf("number 2\n");
        break;
    default:
        printf("other number\n");
        break;
    }

    char gender = 'y';
    switch (gender)
    {
    case 'm':
        printf("I am male");
        break;
    case 'f':
        printf("I am female");
        break;
    default:
        printf("No gender specified");
        break;
    }
    return 0;
}
