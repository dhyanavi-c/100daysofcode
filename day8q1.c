// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%.2f is the largest.\n", a);
    } else if (b >= a && b >= c) {
        printf("%.2f is the largest.\n", b);
    } else {
        printf("%.2f is the largest.\n", c);
    }

    return 0;
}
