#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t score;

    printf("Enter exam score (0-100): ");
    if (scanf("%d", &score) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Boundary validation using logical AND (&&)
    if (score < 0 || score > 100) {
        printf("Out of range! Score must be between 0 and 100.\n");
        return 1;
    }

    // Branching logic
    if (score >= 90) {
        printf("Grade: A (Excellent)\n");
    } else if (score >= 75) {
        printf("Grade: B (Good)\n");
    } else if (score >= 50) {
        printf("Grade: C (Pass)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}