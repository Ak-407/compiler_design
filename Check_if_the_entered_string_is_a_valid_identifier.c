#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isIdentifier(char *str) {
    if (!isalpha(str[0]) && str[0] != '_') return false;
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') return false;
    }
    return true;
}

int main() {
    char str[50];
    printf("Enter an identifier: ");
    scanf("%s", str);
    if (isIdentifier(str)) {
        printf("%s is a valid identifier.\n", str);
    } else {
        printf("%s is not a valid identifier.\n", str);
    }
    return 0;
}