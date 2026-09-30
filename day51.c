// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main() {
    int nums[100], n, target;
    int first = -1, last = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Find first occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    if (first == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence: %d at index %d\n", nums[first], first);
        printf("Last occurrence: %d at index %d\n", nums[last], last);
    }

    return 0;
}