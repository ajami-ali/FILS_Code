#include <stdio.h>
#include <stdlib.h> // Provides malloc, calloc, free
#include <stdint.h>

int main() {
    int32_t elementCount = 4;
    size_t allocationSize = elementCount * sizeof(int32_t);

    printf("=== Allocating Dynamic Heap Memory ===\n");
    printf("Requesting %zu bytes on the Heap...\n\n", allocationSize);

    // malloc returns a void pointer (void*) to the allocated Heap block
    int32_t *heapArr = (int32_t*)malloc(allocationSize);

    // ALWAYS check if malloc returned NULL (out-of-memory safety check)
    if (heapArr == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    // Populate Heap memory
    for (int32_t i = 0; i < elementCount; i++) {
        heapArr[i] = (i + 1) * 100;
    }

    printf("=== Inspecting Heap Allocation ===\n");
    for (int32_t i = 0; i < elementCount; i++) {
        printf("Heap Element [%d] | Address: %p | Value: %d\n", 
               i, (void*)(heapArr + i), heapArr[i]);
    }

    printf("\n=== Releasing Heap Memory ===\n");
    free(heapArr); // Releases memory back to OS
    printf("Memory freed successfully.\n");

    // Best Practice: Zero out pointer to avoid accessing dangling memory
    heapArr = NULL; 
    printf("Pointer set to NULL safely: %p\n", (void*)heapArr);

    return 0;
}