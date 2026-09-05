#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t numbers[5] = {10, 20, 30, 40, 50};

    printf("=== Array Memory Layout ===\n");
    printf("Array Base Address (numbers):   %p\n", (void*)numbers);
    printf("First Element Address (&num[0]): %p\n\n", (void*)&numbers[0]);

    printf("=== Traversing via Indexing vs Pointer Arithmetic ===\n");
    for (int32_t i = 0; i < 5; i++) {
        // Pointer arithmetic: *(numbers + i) is mathematically identical to numbers[i]
        printf("Index [%d] | Address: %p | Value (Index): %d | Value (Pointer): %d\n",
               i, (void*)(numbers + i), numbers[i], *(numbers + i));
    }

    return 0;
}