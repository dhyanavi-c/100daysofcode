// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    char filename[256];

    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) {
        return 0;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 0;
    }

    printf("File opened successfully.\n");
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
