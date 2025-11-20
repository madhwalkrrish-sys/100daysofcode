#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int freq[256] = {0};  // frequency of each ASCII character
    int left = 0, right = 0;
    int maxLen = 0;

    while(s[right] != '\0') {
        char c = s[right];

        // If character is already in the window, shrink the window
        while(freq[(unsigned char)c] == 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        // Add the new character
        freq[(unsigned char)c] = 1;

        // Update maximum length
        int windowLen = right - left + 1;
        if(windowLen > maxLen)
            maxLen = windowLen;

        right++;
    }

    printf("Length of longest substring without repeating characters = %d", maxLen);

    return 0;
}
