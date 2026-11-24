// Q145: Return a structure containing top student's details from a function.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

struct Student findTopStudent(const struct Student students[], int n) {
    struct Student top = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    struct Student *students = (struct Student *)malloc((size_t)n * sizeof(struct Student));
    if (!students) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            free(students);
            return 0;
        }
    }

    struct Student top = findTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);

    free(students);
    return 0;
}
