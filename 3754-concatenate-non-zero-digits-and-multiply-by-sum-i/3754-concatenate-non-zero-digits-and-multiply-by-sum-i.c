long long sumAndMultiply(int n) {
    long long x=0, sum=0, p=1;

    if(n==0) return 0;
    while(n!=0)
    {
        int digit = n%10;
        if(digit !=0)
        {
            sum += digit;
            x = x + (digit * p);
            p = p*10;
        }        
        n /=10;    
    }

    return x*sum;
}