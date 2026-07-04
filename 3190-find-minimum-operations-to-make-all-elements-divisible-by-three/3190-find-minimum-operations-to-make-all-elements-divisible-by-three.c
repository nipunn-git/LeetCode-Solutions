int minimumOperations(int* nums, int numsSize) {
    int op=0;
    for(int i=0; i<numsSize; i++)
    {
        int div = nums[i] % 3;
        if(div == 1)
        {
            op++;
        }
        else if(div ==2)
        {
            op++;
        }
    }
    return op;
}