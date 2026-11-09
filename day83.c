// Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char input[16];
    if (scanf("%15s", input) != 1) {
        return 0;
    }

    const char *names[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    enum Month m = 0;
    for (int i = JAN; i <= DEC; i++) {
        if (strcmp(input, names[i]) == 0) {
            m = (enum Month)i;
            break;
        }
    }

    switch (m) {
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }

    return 0;
}
