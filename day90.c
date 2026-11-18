// Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[32];
    if (scanf("%31s", input) != 1) {
        return 0;
    }

    const char *token = input;
    const char *eq = strchr(input, '=');
    if (eq != NULL) {
        token = eq + 1;
    }

    struct Person p;
    if (strcmp(token, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(token, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(token, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        printf("Invalid gender\n");
        return 0;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
