// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.");

    return 0;
}