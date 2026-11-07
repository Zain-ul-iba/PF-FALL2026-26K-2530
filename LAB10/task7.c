#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file;
    char name[100];
    int count = 0;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Could not open students.txt for writing.\n");
        return 1;
    }

    printf("Enter 3 student names:\n");

    for (int i = 0; i < 3; i++) 
	{
        if (fgets(name, sizeof(name), stdin) == NULL) {
            fclose(file);
            return 1;
        }

        name[strcspn(name, "\n")] = '\0';

        if (fprintf(file, "%s\n", name) < 0) {
            printf("Could not write the name.\n");
            fclose(file);
            return 1;
        }
    }

    if (fclose(file) != 0) {
        printf("Could not finish saving the file.\n");
        return 1;
    }

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Could not open students.txt for reading.\n");
        return 1;
    }

    printf("\nNames read from students.txt:\n");

    while (fgets(name, sizeof(name), file) != NULL) {
        name[strcspn(name, "\n")] = '\0';
        count++;
        printf("%d. %s\n", count, name);
    }

    if (ferror(file)) {
        printf("An error occurred while reading the file.\n");
        fclose(file);
        return 1;
    }

    fclose(file);
    printf("Total students in file: %d\n", count);

    return 0;
}
