int countPartitions(int* nums, int numsSize) {
    int totalsum=0;
    for(int i=0;i<numsSize;i++)
    {
        totalsum += nums[i];
    }

    int left=0, count=0;
    for(int i=0;i<numsSize-1;i++)
    {
        left +=nums[i];
        int right= totalsum-left;
        if((left-right)%2 == 0) count++;
    }
    return count;
}