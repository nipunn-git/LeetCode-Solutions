int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max=0;

    for(int i=0; i<accountsSize;i++)
    {
        int current=0;

        for(int j=0;j<accountsColSize[i];j++)
        {
            current += accounts[i][j];
        }
        if(current>max)
        {
            max=current;
        }
    }
    return max;
}