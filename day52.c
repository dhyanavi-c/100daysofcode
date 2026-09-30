// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int arr[100], n, x;
    int low = 0, high, ans = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // possible answer
            high = mid - 1;  // look for an earlier occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}