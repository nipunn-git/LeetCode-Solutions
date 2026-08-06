int smallestNumber(int n, int t) {
    int p=1,i=n, save;
    
    while(1)
    {
        int p=1;
        int temp=i;
        while(temp>0)
        {
            p *= temp%10;
            temp /=10;
        }
        if(p%t==0)
        {
            return i;
        }
        i++;
    }
}