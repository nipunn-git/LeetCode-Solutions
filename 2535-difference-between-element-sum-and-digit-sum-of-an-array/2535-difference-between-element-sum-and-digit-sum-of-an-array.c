int differenceOfSum(int* nums, int numsSize) {
    int elementSum=0, digitSum=0, i=0;

    for(i=0; i<numsSize; i++)
    {
        elementSum += nums[i];
    }

    for(i=0; i<numsSize; i++)
    {
        while(nums[i] !=0)
        {
            int temp = nums[i]%10;
            digitSum +=temp;
            nums[i] /=10;
        }
    }

    return abs(elementSum - digitSum);
}