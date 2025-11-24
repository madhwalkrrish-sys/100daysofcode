#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Input source file name
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    // Input destination file name
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    // Copy content character-by-character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully!\n");

    return 0;
}
