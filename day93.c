// Q143: Find and print the student with the highest marks.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    struct Student *students = (struct Student *)malloc((size_t)n * sizeof(struct Student));
    if (!students) {
        return 1;
    }

    int topIdx = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            free(students);
            return 0;
        }
        if (students[i].marks > students[topIdx].marks) {
            topIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topIdx].name, students[topIdx].marks);
    free(students);
    return 0;
}
