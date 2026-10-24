// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 200003

typedef struct {
    int key;
    int used;
} HashSlot;

static int findOrInsert(HashSlot *table, int val) {
    unsigned int idx = (unsigned int)val % HASH_SIZE;
    while (table[idx].used) {
        if (table[idx].key == val) {
            return 1;
        }
        idx = (idx + 1) % HASH_SIZE;
    }
    table[idx].used = 1;
    table[idx].key = val;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    HashSlot *table = (HashSlot *)calloc(HASH_SIZE, sizeof(HashSlot));
    if (!table) {
        return 1;
    }

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (repeated == -1 && findOrInsert(table, val)) {
            repeated = val;
        }
    }

    printf("%d\n", repeated);
    free(table);
    return 0;
}
