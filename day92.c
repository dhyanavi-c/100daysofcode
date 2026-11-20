// Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }

    printf("%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
