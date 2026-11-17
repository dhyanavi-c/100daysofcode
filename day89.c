// Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = TIMEOUT;

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", s1, s2, s3);
    return 0;
}
