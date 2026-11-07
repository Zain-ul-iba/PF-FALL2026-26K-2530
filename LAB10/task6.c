#include <stdio.h>
#include <string.h>
int main(void)
{
    char names[5][50], temp[50];

    printf("Enter 5 student names without spaces:\n");
    for (int i = 0; i < 5; i++) {
        if (scanf("%49s", names[i]) != 1)
            return 1;
    }

    for (int pass = 0; pass < 4; pass++) {
        for (int j = 0; j < 4 - pass; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for (int i = 0; i < 5; i++)
        printf("%s\n", names[i]);

    return 0;
}
