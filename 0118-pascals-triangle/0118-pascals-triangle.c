/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
     //total number of elements/rows in the array
    *returnSize = numRows;

    //Allocate memory for the array tracking the sizes of each row
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    //Allocate memory for the primary 2D array pointer
    int** result = (int**)malloc(numRows * sizeof(int*));

    for(int i=0;i<numRows;i++){
        //each row has i+1 elements
        (*returnColumnSizes)[i] = i+1;
        //allocate memory for current row
        result[i] = (int*)malloc((i+1)*sizeof(int));

        result[i][0]=1; result[i][i]=1; //1st and last of every row is 1

// Fill in the middle elements by summing the two numbers directly above it
        for (int j = 1; j < i; j++) {
            result[i][j]=result[i-1][j-1]+result[i-1][j];
        }
    }

    return result;
}