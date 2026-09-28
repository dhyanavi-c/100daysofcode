// Print the initials of a name.

#include <stdio.h>

int main() {
    char first, last;

    printf("Enter your name: ");
    scanf(" %c", &first);
    scanf("%*s %c", &last);

    printf("Initials: %c.%c.", first, last);

    return 0;
}