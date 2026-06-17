class Solution {
    public int subtractProductAndSum(int n) {
        int p=1, s=0;
        while(n!=0)
        {
            int n1=n%10;
            p=p*n1;
            s=s+n1;
            n=n/10;
        }
        return p-s;
    }
}