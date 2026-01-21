#include <stdio.h>

int main()
{
    /* code */
    char fullName[50];
    printf("Enter your name : ");
    fgets(fullName, 50, stdin);
    printf("Hello  %s \nHave a nice Day!! ", fullName);
    return 0;
}
