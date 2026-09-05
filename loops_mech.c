#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num;
    uint64_t factorial = 1;

    printf("Enter a positive integer (1-20): ");
    if (scanf("%d", &num) != 1 || num < 1 || num > 20) {
        printf("Invalid input. Must be between 1 and 20.\n");
        return 1;
    }

    printf("\n=== For Loop: Factorial Step Execution ===\n");
    for (int32_t i = 1; i <= num; i++) {
        factorial *= i; // Equivalent to: factorial = factorial * i
        printf("Step %2d | Current Factorial: %llu\n", i, factorial);
    }

    printf("\n=== While Loop: Countdown ===\n");
    int32_t count = num;
    while (count > 0) {
        printf("%d... ", count);
        count--; // Decrement counter
    }
    printf("Liftoff!\n");

    return 0;
}