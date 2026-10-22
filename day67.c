// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    if (scanf("%d", &m) != 1 || m < 0) {
        return 0;
    }
    int *a = (int *)malloc((size_t)(m > 0 ? m : 1) * sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    if (scanf("%d", &n) != 1 || n < 0) {
        free(a);
        return 0;
    }
    int *b = (int *)malloc((size_t)(n > 0 ? n : 1) * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int *merged = (int *)malloc((size_t)(m + n > 0 ? m + n : 1) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }

    for (int p = 0; p < k; p++) {
        if (p > 0) {
            printf(" ");
        }
        printf("%d", merged[p]);
    }
    printf("\n");

    free(a);
    free(b);
    free(merged);
    return 0;
}
