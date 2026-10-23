// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int missing = n;
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        missing ^= i ^ x;
    }

    printf("%d\n", missing);
    return 0;
}
