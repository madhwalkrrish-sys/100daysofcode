#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file in read mode
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(in);
        return 1;
    }

    // Read each character, convert to uppercase, write to output
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    // Close both files
    fclose(in);
    fclose(out);

    printf("Conversion completed! Check output.txt\n");

    return 0;
}
