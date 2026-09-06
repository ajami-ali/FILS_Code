#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Populate initial 3 slots
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("=== Original Heap Array (3 Elements) ===\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d | Address: %p\n", i, arr[i], (void*)&arr[i]);
    }

    // Expand memory block to hold 5 ints (20 bytes total)
    int *temp = (int *)realloc(arr, 5 * sizeof(int));

    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(arr);
        return 1;
    }

    arr = temp; // Reassignment safe: arr now points to resized block

    // Assign new values to expanded slots
    arr[3] = 40;
    arr[4] = 50;

    printf("\n=== Expanded Heap Array (5 Elements) ===\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d | Address: %p\n", i, arr[i], (void*)&arr[i]);
    }

    // Clean up
    free(arr);
    arr = NULL;

    return 0;
}