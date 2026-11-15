// Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (enum TrafficLight t = RED; t <= GREEN; t++) {
        printf("%s=%d\n", names[t], t);
    }

    return 0;
}
