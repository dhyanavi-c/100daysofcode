// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    FILE *fp = fopen("students.txt", "w");
    if (!fp) {
        printf("Error: Could not open students.txt for writing\n");
        return 1;
    }

    char name[100];
    int roll;
    int marks;

    for (int i = 0; i < n; i++) {
        scanf("%99s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (!fp) {
        printf("Error: Could not open students.txt for reading\n");
        return 1;
    }

    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
