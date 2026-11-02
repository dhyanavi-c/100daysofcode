// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <ctype.h>
#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (!in) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (!out) {
        printf("Error: Could not open output.txt\n");
        fclose(in);
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper((unsigned char)ch), out);
    }

    fclose(in);
    fclose(out);
    return 0;
}
