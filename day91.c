// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    if (scanf("%99s %d %d", s.name, &s.roll_no, &s.marks) != 3) {
        return 0;
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
