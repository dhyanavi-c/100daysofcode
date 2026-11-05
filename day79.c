// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    double avg = (count > 0) ? (double)sum / count : 0.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
