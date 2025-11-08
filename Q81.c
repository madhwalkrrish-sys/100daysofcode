#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real applications.

    // Loop through each character until the null terminator '\0' is found
    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
