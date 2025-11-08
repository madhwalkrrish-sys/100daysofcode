#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0}, max = 0, mostFreqDigit = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // If number is negative, make it positive
    if(num < 0)
        num = -num;

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            mostFreqDigit = i;
        }
    }

    // Display result
    printf("The digit that occurs the most times is %d (occurs %d times).\n", mostFreqDigit, max);

    return 0;
}
