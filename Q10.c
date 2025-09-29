#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // remaining minutes
    seconds = totalSeconds % 60;          // remaining seconds

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
