#include <stdio.h>
#include <stdint.h> // Provides fixed-width integer types

int main() {
    int32_t userAge;     // Guaranteed exact 32-bit (4-byte) signed integer
    uint8_t rawByte;     // Guaranteed exact 8-bit (1-byte) unsigned integer (0-255)

    printf("Enter your age: ");
    // scanf requires the memory address (&) to store input directly into RAM
    if (scanf("%d", &userAge) != 1) {
        printf("Error: Invalid input received.\n");
        return 1;
    }

    printf("Enter a small raw byte number (0-255): ");
    unsigned int temp;
    scanf("%u", &temp);
    rawByte = (uint8_t)temp;

    printf("\n=== Memory Allocation & Dereferencing ===\n");
    printf("userAge Value: %d | Memory Address: %p | Size: %zu bytes\n", 
            userAge, (void*)&userAge, sizeof(userAge));
    printf("rawByte Value: %u | Memory Address: %p | Size: %zu bytes\n", 
            rawByte, (void*)&rawByte, sizeof(rawByte));

    return 0;
}