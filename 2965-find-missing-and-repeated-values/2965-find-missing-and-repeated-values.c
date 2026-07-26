/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int n=gridSize;
    int total = n*n;
    int* freq = (int*)calloc(total+1, sizeof(int));
    int* ans = (int*)malloc(2* sizeof(int));
    *returnSize =2;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<gridColSize[i]; j++)
        {
            freq[grid[i][j]]++;
        }
    }

    for (int i = 1; i <= total; i++) 
    {
        if (freq[i] == 2) ans[0] = i;   // repeated
        if (freq[i] == 0) ans[1] = i;   // missing
    }

    free(freq);
    return ans;
}