#include <stdio.h>

int main() {
    
    // Create an array of integers.
    int integerArray[] = {25, 100, 75, 50, 50}; 
    
    // Find the size of the array.
    int size = sizeof(integerArray) / sizeof(integerArray[0]);
    
    // Track the sum of the integers in the array.
    int sum = 0; 

    // Add each integer in the array to the sum.
    for (int i = 0; i < size; i++) {
        sum += integerArray[i];
    }

    // Print the sum of the elements in the array.
    printf("The sum of the array elements is: %d\n", sum);

    return 0; 
}