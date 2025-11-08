#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int len1, len2;

    printf("Enter first string: ");
    gets(str1);  // Note: gets() is unsafe; use fgets() in real programs.

    printf("Enter second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // If lengths differ, cannot be rotations
    if (len1 != len2) {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("The strings ARE rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}
