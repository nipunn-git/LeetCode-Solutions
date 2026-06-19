class Solution {
    public boolean canJump(int[] nums) {
        int maxJumpLimit=0;

        for(int i=0; i<nums.length;i++)
        {
            if(i>maxJumpLimit)
            {
                return false;
            }

            maxJumpLimit = Math.max(maxJumpLimit, i+nums[i]);

            if(maxJumpLimit >= nums.length-1)
            {
                return true;
            }
        }
        return true;
    }
}