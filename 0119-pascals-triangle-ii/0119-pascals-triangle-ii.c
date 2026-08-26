/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) 
{
    *returnSize = rowIndex + 1;
    int* row =(int*)malloc((*returnSize)*sizeof(int));
    
    row[0] = 1;
    for (int i=1; i<=rowIndex; i++)
    {
        
        row[i] = (int)((long long)row[i-1]*(rowIndex-i+1)/i);
    }
    
    return row;
}