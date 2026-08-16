int countPrimes(int n) {
    if(n==1 || n==0) return 0;

    bool *isComposite=(bool *)calloc(n, sizeof(bool));
    if(!isComposite) return 0;

    for(int i=2; i*i<n; i++)
    {
        if(!isComposite[i])
        {
            for(int j=i*i;j<n;j+=i)
            {
                isComposite[j]=true;
            }
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++) 
    {
        if (!isComposite[i]) 
        {
            count++;
        }
    }

    free(isComposite);
    return count;
}