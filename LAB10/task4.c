#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[300];
    char *p;
    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL)
        return 1;
    sentence[strcspn(sentence, "\n")] = '\0';
    p = strchr(sentence, 'a');

    if (p != NULL)
        printf("First 'a' found at index %td\n", p - sentence);
    else
        printf("Letter 'a' not found.\n");

    if (strstr(sentence, "good") != NULL)
        printf("Word 'good' found.\n");
    else
        printf("Word 'good' not found.\n");

    return 0;
}
