#include <stdio.h>

int main()
{
    char name[] = "Aung Thu";
    // character pointer
    // char *name = "Aung Thu";
    printf("%s\n", name);

    // fputs(write to file)(stdout => write in terminal)
    fputs("Hello\n", stdout);

    // fgets(read from file)
    char word[20];
    char *p;
    p = &word[0];
    printf("Enter word: ");
    fgets(p, 20 * sizeof(char), stdin);
    printf("%s\n", word);
    return 0;
}
