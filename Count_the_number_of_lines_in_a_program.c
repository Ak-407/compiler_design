#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lines = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(file);
    printf("Total number of lines: %d\n", lines);

    return 0;
}