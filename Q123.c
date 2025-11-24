#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // Flag to track if we are inside a word

    // Get the filename from the user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Check if inside a word
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    // Close the file
    fclose(fp);

    // If file is not empty, count last line
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    // Print results
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
