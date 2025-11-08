#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // To store frequency of each lowercase alphabet
    int i = 0;
    char firstRepeating = '\0';

    printf("Enter a string (lowercase letters only): ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real programs.

    while (str[i] != '\0') {
        char ch = str[i];

        // Check only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            // If a character appears again, mark as first repeating
            if (freq[ch - 'a'] == 2) {
                firstRepeating = ch;
                break;
            }
        }

        i++;
    }

    if (firstRepeating != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeating);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
