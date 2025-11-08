#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[15];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in dd/mm/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Extract day, month, and year using sscanf
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Validate month
    if (month < 1 || month > 12) {
        printf("Invalid month entered!\n");
        return 1;
    }

    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
