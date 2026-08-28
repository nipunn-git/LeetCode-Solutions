#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* numberGame(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize; i += 2) {
        arr[i] = nums[i + 1];
        arr[i + 1] = nums[i];
    }

    return arr;
}