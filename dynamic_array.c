#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Write values to the 3 allocated heap slots
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("=== Dynamic Array Values & Addresses ===\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d | Address: %p\n", i, arr[i], (void*)&arr[i]);
    }

    free(arr);
    arr = NULL; // Good practice: nullify freed pointer
    return 0;
