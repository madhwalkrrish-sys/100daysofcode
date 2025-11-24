#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;

    // Example: change this value to test (RED / YELLOW / GREEN)
    signal = RED;

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid Signal\n");
    }

    return 0;
}
