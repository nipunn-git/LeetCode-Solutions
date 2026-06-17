class Solution {
    public int singleNumber(int[] nums) {
        int repeat=0;
        for(int num:nums)
        {
            repeat ^=num;
        }
        return repeat;
    }
}