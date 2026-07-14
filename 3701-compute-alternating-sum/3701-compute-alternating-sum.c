int alternatingSum(int* nums, int numsSize) {
    int evenCount=0, oddCount=0;

    if(numsSize==1) return nums[0];

    for(int i=0; i<numsSize; i++)
    {
        if(i%2==0) evenCount += nums[i];
    }

    for(int i=0; i<numsSize; i++)
    {
        if(i%2 !=0) oddCount += nums[i];
    }

    return evenCount-oddCount;
}