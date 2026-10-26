// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user's name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int age;

    printf("Enter name: ");
    if (!fgets(name, sizeof(name), stdin)) {
        return 0;
    }
    size_t len = strlen(name);
    while (len > 0 && (name[len - 1] == '\n' || name[len - 1] == '\r')) {
        name[--len] = '\0';
    }

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) {
        return 0;
    }

    FILE *fp = fopen("info.txt", "w");
    if (!fp) {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
