#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;
    char temp;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real programs.

    // Find length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string in place
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
