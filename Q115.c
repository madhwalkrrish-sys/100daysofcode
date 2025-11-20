#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    
    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths differ, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int freq[26] = {0};  // for 'a' to 'z'

    // Count frequency from s
    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    // Subtract frequency using t
    for (int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    // If all frequencies are zero → anagram
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
