#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Take filename from user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Clear input buffer before using fgets()
    getchar();

    // Take new line of text from user
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fputs(text, fp);

    // Close file
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
