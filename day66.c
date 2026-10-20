// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1 -1\n");
        return 0;
    }

    int *nums = (int *)malloc((size_t)n * sizeof(int));
    if (!nums) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                free(nums);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    free(nums);
    return 0;
}
