#include <stdio.h>

int main() {
    int group[] = {1, 3, 5, 3, 1}; // number of stars in each group
    int i, j, k;

    for(i = 0; i < 5; i++) {
        for(j = 1; j <= group[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line after each group
    }

    return 0;
}
