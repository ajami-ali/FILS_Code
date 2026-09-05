#include <stdio.h>
#include <stdint.h>

// Manual strlen implementation to demonstrate pointer traversal until '\0'
size_t customStrLen(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++; // Advance pointer 1 byte at a time (char size)
    }
    return (size_t)(ptr - str); // Pointer subtraction yields element count
}

int main() {
    // Stack-allocated mutable string array
    char stackStr[] = "FILS 2026";

    printf("=== String Memory Layout ===\n");
    printf("String Content: %s\n", stackStr);
    printf("Calculated Length: %zu\n", customStrLen(stackStr));
    printf("Actual Array Size: %zu bytes (Includes '\\0')\n\n", sizeof(stackStr));

    printf("=== Inspecting Raw Bytes in RAM ===\n");
    for (size_t i = 0; i <= customStrLen(stackStr); i++) {
        printf("Char: '%c' | ASCII: %3d | Address: %p\n", 
               stackStr[i] == '\0' ? '0' : stackStr[i], 
               (int)stackStr[i], 
               (void*)&stackStr[i]);
    }

    // Mutating stack-allocated string memory
    stackStr[0] = 'f';
    printf("\nMutated Stack String: %s\n", stackStr);

    return 0;
}