#include <stdio.h>

// Function to exchange values using pointers
void exchangeValues(int *ptr1, int *ptr2) {
    int temp = *ptr1; // Store the value pointed by ptr1 in a temporary variable
    *ptr1 = *ptr2;    // Assign the value pointed by ptr2 to ptr1
    *ptr2 = temp;     // Assign the value from the temporary variable to ptr2
}

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Before exchange: num1 = %d, num2 = %d\n", num1, num2); // Output: Before exchange: num1 = 5, num2 = 10

    // Call the function and pass the addresses of 'num1' and 'num2'
    exchangeValues(&num1, &num2);

    printf("After exchange: num1 = %d, num2 = %d\n", num1, num2); // Output: After exchange: num1 = 10, num2 = 5

    return 0;
}

