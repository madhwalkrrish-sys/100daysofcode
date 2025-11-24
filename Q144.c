#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts a structure and prints it
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student st;

    // Input values
    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll_no);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Function call
    printStudent(st);

    return 0;
}
