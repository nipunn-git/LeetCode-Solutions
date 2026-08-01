int sumOddLengthSubarrays(int* arr, int arrSize) {
    int sum=0;
    for(int i=0; i<arrSize; i++)
    {
        int left=i+1;
        int right=arrSize-i;
        int subarr = left*right;
        int oddCount =(subarr+1)/2;
        sum += arr[i] * oddCount;
    }
    return sum;
}