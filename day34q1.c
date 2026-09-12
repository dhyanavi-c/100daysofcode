// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int a[100], n, num, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position: ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
