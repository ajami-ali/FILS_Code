#include <stdio.h>

int main() {
    int age = 17;
    double exactVal = 3.14159265;
    char grade = 'A';

    printf("=== Memory Size Inspection ===\n");
    printf("Size of char:   %zu byte(s)\n", sizeof(char));
    printf("Size of int:    %zu byte(s)\n", sizeof(int));
    printf("Size of float:  %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n\n", sizeof(double));

    printf("=== Stored Values ===\n");
    printf("Age: %d | Grade: %c | Value: %.4lf\n", age, grade, exactVal);

    return 0;
}