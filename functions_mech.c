#include <stdio.h>
#include <stdint.h>

// Pass-by-Value: Operates on a temporary stack copy
void passByValue(int32_t val) {
    val = val + 100;
    printf("[Inside passByValue] Local Copy Address: %p | Value: %d\n", (void*)&val, val);
}

// Pass-by-Reference: Operates directly on RAM via memory address pointer
void passByReference(int32_t *ptr) {
    *ptr = *ptr + 100; // Dereferencing: Mutating value at stored address
    printf("[Inside passByReference] Pointer Address: %p | Points To: %p | Value: %d\n", 
            (void*)&ptr, (void*)ptr, *ptr);
}

int main() {
    int32_t num = 50;

    printf("=== Initial State in main() ===\n");
    printf("num Address: %p | Value: %d\n\n", (void*)&num, num);

    printf("=== Step 1: Pass-by-Value ===\n");
    passByValue(num);
    printf("Post-Call num in main(): %d (Unchanged!)\n\n", num);

    printf("=== Step 2: Pass-by-Reference ===\n");
    passByReference(&num); // Passing memory address of num
    printf("Post-Call num in main(): %d (Mutated in RAM!)\n", num);

    return 0;
}