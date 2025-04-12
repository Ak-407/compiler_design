#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isKeyword(char *str) {
    char *keywords[] = {"int", "float", "if", "else", "while", "return", "for", "char", "void"};
    int n = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < n; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isKeyword(str)) {
        printf("%s is a valid keyword.\n", str);
    } else {
        printf("%s is not a valid keyword.\n", str);
    }
    return 0;
}
