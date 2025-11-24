#include <stdio.h>

enum Example {
    A,        // 0
    B,        // 1
    C = 10,   // 10
    D,        // 11
    E = 25    // 25
};

int main() {

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}
