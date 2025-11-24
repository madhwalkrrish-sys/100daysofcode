#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[200];   // To store each line while reading

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read lines until end of file
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);   // Print each line
    }

    // Close the file
    fclose(fp);

    return 0;
}
