int minElement(int* nums, int numsSize) {
    int sum=0;
    for(int i=0; i<numsSize; i++)
    {
        while(nums[i]!=0)
        {
            int digit= nums[i] %10;
            sum = sum + digit;
            nums[i] /=10;
        }
        nums[i] = sum;
        sum=0;
    }
    
    int min = nums[0];
    for(int i=0; i<numsSize; i++)
    {
        if(min > nums[i])
        {
            min = nums[i];
        }
    }
    return min;
}