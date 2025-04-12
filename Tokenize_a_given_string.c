#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    getchar();
    fgets(str, 100, stdin);

    char *token = strtok(str, " ,;\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,;\n");
    }
    return 0;
}
