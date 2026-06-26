int minOperations(int* nums, int numsSize, int k) {
    long long sum=0;
    int ans;
    for(int i=0; i<numsSize; i++)
    {
        sum = sum + nums[i];
    }

    ans = sum % k;
    if(ans == 0) return 0;

    else return ans;
}