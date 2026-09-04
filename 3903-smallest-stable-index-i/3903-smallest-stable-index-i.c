int firstStableIndex(int* nums, int numsSize, int k) {
    if (numsSize == 0) return -1;

    int* minSuffix = (int*)malloc(numsSize * sizeof(int));
    
    minSuffix[numsSize - 1] = nums[numsSize - 1];
    for (int i = numsSize - 2; i >= 0; i--) {
        minSuffix[i] = (nums[i] < minSuffix[i + 1]) ? nums[i] : minSuffix[i + 1];
    }
    
    int currMax = nums[0];
    int result = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > currMax) {
            currMax = nums[i];
        }
        
        if (currMax - minSuffix[i] <= k) {
            result = i;
            break;
        }
    }
    
    free(minSuffix);
    return result;
}