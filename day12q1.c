// Write a program to calculate library fine based on late days as follows:

#include <stdio.h>

int main() {
    int days, fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Library Fine = ₹%d", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Library Fine = ₹%d", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Library Fine = ₹%d", fine);
    }
    else {
        printf("Membership Cancelled");
    }

    return 0;
}
