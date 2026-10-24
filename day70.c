// Q120: Write a program to take a string input. Change it to sentence case.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[1005];
    if (!fgets(str, sizeof(str), stdin)) {
        return 0;
    }

    size_t len = strlen(str);
    while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
        str[--len] = '\0';
    }

    int newWord = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (isspace(ch)) {
            newWord = 1;
        } else if (newWord) {
            str[i] = (char)toupper(ch);
            newWord = 0;
        } else {
            str[i] = (char)tolower(ch);
        }
    }

    printf("%s\n", str);
    return 0;
}
