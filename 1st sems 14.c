#include <stdio.h>

// Function that takes two pointers to integers and swaps their values
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2); // Output: Before swapping: num1 = 5, num2 = 10

    // Call the function and pass the addresses of 'num1' and 'num2'
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2); // Output: After swapping: num1 = 10, num2 = 5

    return 0;
}

