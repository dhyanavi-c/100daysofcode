// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <ctype.h>
#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (!fp) {
        printf("Error: Could not open sample.txt\n");
        return 1;
    }

    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
