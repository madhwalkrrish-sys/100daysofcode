#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // extract last digit
    digits = (int)log10(num); // total digits - 1
    first = num / (int)pow(10, digits); // extract first digit

    // remove first and last digits from original number
    middle = num % (int)pow(10, digits); // remove first digit
    middle = middle / 10;                // remove last digit

    // construct new number after swapping
    swappedNum = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
