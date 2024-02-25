#include <stdio.h>

// Function using call by value
void incrementByValue(int x) {
   x= x+1;
   return x+1; // The modification is made to the local copy of 'x'
}

int main() {
    int num = 5;
    incrementByValue(num);
    printf("Value after function call: %d\n", num); // Output: Value after function call: 5
    return 0;
}

