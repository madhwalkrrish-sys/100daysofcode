#include <stdio.h>

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Month m;

    for (m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case JANUARY:   printf("JANUARY   - 31 days\n"); break;
            case FEBRUARY:  printf("FEBRUARY  - 28/29 days\n"); break;
            case MARCH:     printf("MARCH     - 31 days\n"); break;
            case APRIL:     printf("APRIL     - 30 days\n"); break;
            case MAY:       printf("MAY       - 31 days\n"); break;
            case JUNE:      printf("JUNE      - 30 days\n"); break;
            case JULY:      printf("JULY      - 31 days\n"); break;
            case AUGUST:    printf("AUGUST    - 31 days\n"); break;
            case SEPTEMBER: printf("SEPTEMBER - 30 days\n"); break;
            case OCTOBER:   printf("OCTOBER   - 31 days\n"); break;
            case NOVEMBER:  printf("NOVEMBER  - 30 days\n"); break;
            case DECEMBER:  printf("DECEMBER  - 31 days\n"); break;
        }
    }

    return 0;
}
