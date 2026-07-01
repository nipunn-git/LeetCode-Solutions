bool xorGame(int* nums, int numsSize) {
    int xor=0;

    for(int i=0;i<numsSize; i++)
    {
        xor = xor ^ nums[i];
    }

    if(xor ==0) return true;
    return numsSize %2 ==0;
}