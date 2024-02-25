#include <stdio.h>

// Function that takes a pointer to an integer and modifies its value
int modifyValue(int *ptr) {
    // Check if the pointer is not NULL to avoid potential issues
    if (*ptr != NULL) {
        *ptr = *ptr * 2; // Double the value of the integer pointed by ptr
    }
}

int main() {
    int number = 5;

    printf("Before modification: %d\n", number); // Output: Before modification: 5

    // Call the function and pass the address of 'number'
    modifyValue(&number);

    printf("After modification: %d\n", number); // Output: After modification: 10

    return 0;
}

