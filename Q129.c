#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float avg;

    // Open file
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    // Calculate average
    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
