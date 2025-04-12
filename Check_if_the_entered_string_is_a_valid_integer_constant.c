#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isIntegerConstant(char *str) {
    int i = 0;
    if (str[0] == '-' || str[0] == '+') i++;
    for (; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) return false;
    }
    return (i > 0);
}

int main() {
    char str[50];
    printf("Enter an integer: ");
    scanf("%s", str);
    if (isIntegerConstant(str)) {
        printf("%s is a valid integer constant.\n", str);
    } else {
        printf("%s is not a valid integer constant.\n", str);
    }
    return 0;
}