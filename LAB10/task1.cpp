#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100], copy[100];
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
        return 1;
    name[strcspn(name, "\n")] = '\0';
    strcpy(copy, name);
    printf("Length: %zu\n", strlen(name));
    printf("Copied name: %s\n", copy);
    printf("Size of name array: %zu bytes\n", sizeof(name));

    return 0;
}
