int findGCD(int* nums, int numsSize) {
    int max=nums[0], min=nums[0];

    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]>max) max=nums[i];
        if(nums[i]<min) min=nums[i];
    }
    
    while(max !=0)
    {
        int temp=max;
        max = min%max;
        min = temp;
    }
    return min;
}