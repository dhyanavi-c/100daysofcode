// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    if (scanf("%19s", input) != 1) {
        return 0;
    }

    enum Status st;
    if (strcmp(input, "SUCCESS") == 0) {
        st = SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        st = FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        st = TIMEOUT;
    } else {
        printf("Unknown status\n");
        return 0;
    }

    switch (st) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
