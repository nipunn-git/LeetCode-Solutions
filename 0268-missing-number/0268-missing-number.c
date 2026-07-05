int missingNumber(int* nums, int numsSize) {
    int sum_expected = (numsSize*(numsSize+1))/2 , sum_actual=0;
    for(int i=0; i<numsSize; i++) sum_actual += nums[i];
    return sum_expected - sum_actual;
}