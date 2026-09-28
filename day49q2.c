// Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char first, middle;
    char surname[20];

    printf("Enter your name: ");
    scanf(" %c", &first);
    scanf(" %c", &middle);
    scanf("%s", surname);

    printf("%c.%c.%s", first, middle, surname);

    return 0;
}