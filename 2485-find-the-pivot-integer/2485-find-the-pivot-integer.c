int pivotInteger(int n) {
    int oneTox=0, xtoN=0;
    int sum= n*(n+1)/2;
    if(n==1) return 1;
    for(int i=0; i<n; i++)
    {
        oneTox += i;
        xtoN = sum- oneTox + i;
        if(xtoN == oneTox) return i;
    }
    return -1;
}

    