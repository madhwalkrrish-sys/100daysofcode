#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';
    len = strlen(name);

    printf("Formatted name: ");

    // Print the first initial
    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    // Loop through name to find other initials
    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i + 1] != '\0') {
            // Check if this is the last word (surname)
            char *lastSpace = strrchr(name, ' ');
            if (&name[i - 1] == lastSpace) {
                // Print the surname in full
                printf(" %s\n", &name[i]);
                return 0;
            } else {
                // Print initial
                printf("%c.", toupper(name[i]));
            }
        }
    }

    printf("\n");
    return 0;
}
