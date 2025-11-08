#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);  // reverse each word
            start = i + 1;  // move to next word
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Reversed each word: %s\n", str);
    return 0;
}
