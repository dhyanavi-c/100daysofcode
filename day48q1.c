// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Different lengths cannot be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 occurs in temp
    if (strstr(temp, str2) != NULL)
        printf("The strings are rotations of each other");
    else
        printf("The strings are not rotations of each other");

    return 0;
}