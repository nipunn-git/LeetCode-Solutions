/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int min=nums[0];
    int max=nums[0];
    bool present[101]={false};

    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]<min) min=nums[i];
        if(nums[i]>max) max=nums[i];
        present[nums[i]]=true;
    }

    int max_missing=(max-min+1)-numsSize;
    int* result=(int*)malloc(sizeof(int) * max_missing);

    int count=0;
    for(int i=min; i<max; i++)
    {
        if(!present[i])
        {
            result[count++]=i;
        }
    }

    *returnSize=count;
    return result;
}