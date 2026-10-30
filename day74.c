// Q124: Take two filenames from the user - a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char srcName[256], destName[256];

    printf("Enter source filename: ");
    if (scanf("%255s", srcName) != 1) {
        return 0;
    }

    printf("Enter destination filename: ");
    if (scanf("%255s", destName) != 1) {
        return 0;
    }

    FILE *src = fopen(srcName, "r");
    if (!src) {
        printf("Error: Could not open source file %s\n", srcName);
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (!dest) {
        printf("Error: Could not open destination file %s\n", destName);
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);
    return 0;
}
