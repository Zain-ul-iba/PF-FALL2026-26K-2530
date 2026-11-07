#include <stdio.h>
#include <string.h>

int main()
{
    char first[50], last[50];
    char full[100] = "";

    printf("Enter first name: ");
    if (scanf("%49s", first) != 1)
        return 1;

    printf("Enter last name: ");
    if (scanf("%49s", last) != 1)
        return 1;
    strcat(full, first);
    strcat(full, " ");
    strcat(full, last);
    printf("Full name: %s\n", full);

    return 0;
}
