int hammingWeight(int n) {
    int hamming = 0;
    while(n)
    {
        hamming += (n&1);     // checks last bit
        n>>=1;  //shift right
    }
    return hamming;
}