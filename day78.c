// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <ctype.h>
#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (!fp) {
        printf("Error: Could not open text.txt\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            char lower = (char)tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
