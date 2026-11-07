#include <stdio.h>
#include <string.h>
int main()
{
    char cities[5][100];
    int longest = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter city %d: ", i + 1);
        if (fgets(cities[i], sizeof(cities[i]), stdin) == NULL)
            return 1;

        cities[i][strcspn(cities[i], "\n")] = '\0';

        if (strlen(cities[i]) > strlen(cities[longest]))
            longest = i;
    }
    printf("\nCity names:\n");
    for (int i = 0; i < 5; i++)
        printf("%d. %s\n", i + 1, cities[i]);
    printf("\nLongest city: %s\n", cities[longest]);
    printf("Length: %zu\n", strlen(cities[longest]));
    return 0;
}
