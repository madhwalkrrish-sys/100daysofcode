#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's a letter
    if (isalpha(name[0]))
        printf("%c", toupper(name[0]));

    // Loop through the rest of the string
    while (name[i] != '\0') {
        // If a space is found, print the next character as an initial
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf(".%c", toupper(name[i + 1]));
        }
        i++;
    }

    printf(".\n");
    return 0;
}
