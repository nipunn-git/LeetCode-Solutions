int minimumDeletions(int* nums, int numsSize) 
{
    int min=nums[0],max=nums[0],Maxtemp=0,Mintemp=0;

    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]>max) 
        {
            max=nums[i];
            Maxtemp=i;
        }
        if(nums[i]<min) 
        {
            min=nums[i];
            Mintemp=i;
        }
    }

    int left=MIN(Maxtemp, Mintemp);
    int right=MAX(Maxtemp, Mintemp);

    int option1 =right+1;
    int option2=numsSize-left;
    int option3= (left+1) + (numsSize-right);

    return MIN(option1, MIN(option2, option3));
}