// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int a[10][10], n, i, j, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check diagonal elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("Diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct.");

    return 0;
}
