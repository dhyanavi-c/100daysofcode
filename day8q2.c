// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It is an uppercase alphabet.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("It is a lowercase alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("It is a digit.\n");
    }
    else {
        printf("It is a special character.\n");
    }

    return 0;
}
