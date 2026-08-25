int missingMultiple(int* nums, int numsSize, int k) {
    bool present[101] = {false};
    
    for (int i = 0; i < numsSize; i++) 
    {
        present[nums[i]] = true;
    }
    
    int multiple = k;
    while (multiple <= 100 && present[multiple]) 
    {
        multiple += k;
    }
    
    return multiple;    
}