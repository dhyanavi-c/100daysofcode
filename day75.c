// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <string.h>

int main() {
    char text[500];

    printf("Enter text to append: ");
    if (!fgets(text, sizeof(text), stdin)) {
        return 0;
    }

    size_t len = strlen(text);
    while (len > 0 && (text[len - 1] == '\n' || text[len - 1] == '\r')) {
        text[--len] = '\0';
    }

    FILE *fp = fopen("data.txt", "a");
    if (!fp) {
        printf("Error: Could not open data.txt\n");
        return 1;
    }

    fprintf(fp, "%s\n", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
