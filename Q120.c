#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Convert first character to uppercase (if alphabet)
    if (s[0] != '\0')
        s[0] = toupper(s[0]);

    // Convert remaining characters to lowercase
    for (int i = 1; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);

    printf("Sentence case: %s", s);

    return 0;
}
