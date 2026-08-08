/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int idx = 0;

    //less than pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) {
            result[idx++] = nums[i];
        }
    }

    //equal to pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == pivot) {
            result[idx++] = nums[i];
        }
    }

    //greater than pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > pivot) {
            result[idx++] = nums[i];
        }
    }

    return result;
}