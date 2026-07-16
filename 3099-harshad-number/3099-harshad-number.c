int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum=0;
    int real=x;
    while(real>0)
    {
        int temp=real%10;
        sum +=temp;
        real=real/10;
    }
    if(x%sum==0) return sum;
    return -1;
}