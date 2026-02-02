#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("=====================================\n");
    printf("        QUIZ GUESSING GAME\n");
    printf("   +2 for Correct | -1 for Wrong\n");
    printf("=====================================\n");

    // Question 1
    printf("\n1. Who is the father of C language?\n");
    printf("1) James Gosling\n2) Dennis Ritchie\n3) Bjarne Stroustrup\n4) Guido van Rossum\n");
    scanf("%d", &answer);
    if(answer == 2) score += 2; else score -= 1;

    // Question 2
    printf("\n2. What is the capital of India?\n");
    printf("1) Mumbai\n2) Delhi\n3) Chennai\n4) Kolkata\n");
    scanf("%d", &answer);
    if(answer == 2) score += 2; else score -= 1;

    // Question 3
    printf("\n3. Which is the smallest prime number?\n");
    printf("1) 1\n2) 2\n3) 3\n4) 5\n");
    scanf("%d", &answer);
    if(answer == 2) score += 2; else score -= 1;

    // Question 4
    printf("\n4. Which data type stores decimal values?\n");
    printf("1) int\n2) char\n3) float\n4) void\n");
    scanf("%d", &answer);
    if(answer == 3) score += 2; else score -= 1;

    // Question 5
    printf("\n5. Which symbol is used for logical AND in C?\n");
    printf("1) &\n2) &&\n3) |\n4) ||\n");
    scanf("%d", &answer);
    if(answer == 2) score += 2; else score -= 1;

    // Question 6
    printf("\n6. Which header file is needed for printf()?\n");
    printf("1) stdio.h\n2) conio.h\n3) math.h\n4) string.h\n");
    scanf("%d", &answer);
    if(answer == 1) score += 2; else score -= 1;

    // Question 7
    printf("\n7. Which operator is used for assignment?\n");
    printf("1) ==\n2) :=\n3) =\n4) !=\n");
    scanf("%d", &answer);
    if(answer == 3) score += 2; else score -= 1;

    // Question 8
    printf("\n8. Which of the following is a loop structure?\n");
    printf("1) if\n2) switch\n3) for\n4) goto\n");
    scanf("%d", &answer);
    if(answer == 3) score += 2; else score -= 1;

    // Question 9
    printf("\n9. Which keyword is used to stop a loop?\n");
    printf("1) break\n2) stop\n3) exit\n4) quit\n");
    scanf("%d", &answer);
    if(answer == 1) score += 2; else score -= 1;

    // Question 10
    printf("\n10. C language is a ___ level language.\n");
    printf("1) Low\n2) High\n3) Middle\n4) Machine\n");
    scanf("%d", &answer);
    if(answer == 3) score += 2; else score -= 1;

    // Final Score
    printf("\n=====================================\n");
    printf("             FINAL SCORE: %d\n", score);
    printf("=====================================\n");

    // Correct Answers
    printf("\nCorrect Answers:\n");
    printf("1) 2\n2) 2\n3) 2\n4) 3\n5) 2\n6) 1\n7) 3\n8) 3\n9) 1\n10) 3\n");

    printf("\nThank you for playing!\n");

    return 0;
}
