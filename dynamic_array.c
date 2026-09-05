#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

int main() {
    // 1. Request space for 3 integers on the Heap (3 * 4 bytes = 12 bytes)
    int *arr = (int *)malloc(3 * sizeof(int));

    // Safety check: Make sure the OS actually gave us memory
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Successfully allocated 12 bytes on the Heap at address: %p\n", (void*)arr);

    // Always free what you allocate
    free(arr);
    return 0;
}