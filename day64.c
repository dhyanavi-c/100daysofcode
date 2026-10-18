// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("0\n");
        return 0;
    }

    size_t len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[--len] = '\0';
    }

    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }
        lastIndex[ch] = i;
        int curLen = i - start + 1;
        if (curLen > maxLen) {
            maxLen = curLen;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
