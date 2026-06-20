#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Traverse the array from right to left
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            
            //dynamically allocated array to be returned
            int* result = (int*)malloc(digitsSize * sizeof(int));
            for (int j = 0; j < digitsSize; j++) {
                result[j] = digits[j];
            }
            return result;
        }
        // If it's 9, it becomes 0 and carry continues to the left
        digits[i] = 0;
    }
    
    // If all digits were 9 (e.g., [9, 9, 9] -> [1, 0, 0, 0])
    *returnSize = digitsSize + 1;
    int* result = (int*)calloc(*returnSize, sizeof(int)); // calloc initializes all elements to 0
    result[0] = 1; // Set the first digit to 1
    
    return result;
}