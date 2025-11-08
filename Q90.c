#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real programs.

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
        }
        i++;
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}
