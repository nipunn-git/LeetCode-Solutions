int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize= 2*numsSize;

    int* ans= (int*)malloc((*returnSize) * sizeof(int));

    for(int i=0; i<numsSize;i++)
    {
        ans[i]=nums[i]; //1st time
        ans[i+numsSize]=nums[i];    //2nd time
    }    
    return ans;
}
