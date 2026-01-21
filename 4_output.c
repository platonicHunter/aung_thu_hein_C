#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // Declare variableName
    int age;
    char name[50];
    char address[200];

    // assign variable
    age = 55;
    strcpy(name, "Aung Thu Hein");
    strcpy(address, "Singapore.");

    printf("%s\n", name);
    printf("%s\n", address);
    printf("%d\n", age);
    printf("My name is %s.I am from %s", name, address);

    return 0;
}
