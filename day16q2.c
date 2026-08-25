// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;   // Store original number

    while (num > 0) {
        rem = num % 10;          // Get last digit
        rev = rev * 10 + rem;    // Build reversed number
        num = num / 10;          // Remove last digit
    }

    if (temp == rev)
        printf("%d is a Palindrome.", temp);
    else
        printf("%d is not a Palindrome.", temp);

    return 0;
}
