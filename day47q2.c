// Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, maxLength = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        }
        else {
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;
        }
    }

    printf("Longest word: ");

    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    return 0;
}