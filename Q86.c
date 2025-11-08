#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real programs.

    // Find string length
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;  // Not a palindrome
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
