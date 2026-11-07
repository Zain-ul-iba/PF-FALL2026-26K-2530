#include <stdio.h>
#include <string.h>
int main()
{
    char correct[] = "lab10pass";
    char password[100];

    printf("Enter password: ");
    if (fgets(password, sizeof(password), stdin) == NULL)
        return 1;
    password[strcspn(password, "\n")] = '\0';

    if (strcmp(password, correct) == 0)
        printf("Access granted\n");
    else
        printf("Access denied\n");

    if (strncmp(password, correct, 3) == 0)
        printf("First 3 characters match.\n");
    else
        printf("First 3 characters do not match.\n");

    return 0;
}
