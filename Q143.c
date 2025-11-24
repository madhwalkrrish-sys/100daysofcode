#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, topIndex = 0;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    // Print result
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", s[topIndex].name);
    printf("Roll No: %d\n", s[topIndex].roll_no);
    printf("Marks: %.2f\n", s[topIndex].marks);

    return 0;
}
