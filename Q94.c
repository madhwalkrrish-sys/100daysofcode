#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real programs.

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // End current word
            currLen = j;

            if (currLen > maxLen) {
                maxLen = currLen;
                int k;
                for (k = 0; k <= currLen; k++) {
                    longest[k] = word[k];  // Copy longest word
                }
            }

            j = 0;  // Reset for next word

            if (str[i] == '\0')  // End of string
                break;
        } else {
            word[j++] = str[i];  // Build current word
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
