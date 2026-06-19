#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void backtrack(int r, int n, int* returnSize, int** returnColumnSizes, 
               char*** *res, char** board, bool* cols, bool* posDiag, bool* negDiag) {
    if (r == n) {
        *res = (char***)realloc(*res, (*returnSize + 1) * sizeof(char**));
        *returnColumnSizes = (int*)realloc(*returnColumnSizes, (*returnSize + 1) * sizeof(int));
        
        (*res)[*returnSize] = (char**)malloc(n * sizeof(char*));
        for (int i = 0; i < n; i++) {
            (*res)[*returnSize][i] = (char*)malloc((n + 1) * sizeof(char));
            strcpy((*res)[*returnSize][i], board[i]);
        }
        
        (*returnColumnSizes)[*returnSize] = n;
        (*returnSize)++;
        return;
    }

    for (int c = 0; c < n; c++) {
        if (cols[c] || posDiag[r + c] || negDiag[r - c + n]) {
            continue;
        }

        board[r][c] = 'Q';
        cols[c] = true;
        posDiag[r + c] = true;
        negDiag[r - c + n] = true;

        backtrack(r + 1, n, returnSize, returnColumnSizes, res, board, cols, posDiag, negDiag);

        board[r][c] = '.';
        cols[c] = false;
        posDiag[r + c] = false;
        negDiag[r - c + n] = false;
    }
}

char*** solveNQueens(int n, int* returnSize, int** returnColumnSizes) {
    *returnSize = 0;
    char*** res = NULL;
    *returnColumnSizes = NULL;

    char** board = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        // FIXED: Corrected type cast from char** to char*
        board[i] = (char*)malloc((n + 1) * sizeof(char));
        memset(board[i], '.', n);
        board[i][n] = '\0';
    }

    bool* cols = (bool*)calloc(n, sizeof(bool));
    bool* posDiag = (bool*)calloc(2 * n, sizeof(bool));
    bool* negDiag = (bool*)calloc(2 * n, sizeof(bool));

    backtrack(0, n, returnSize, returnColumnSizes, &res, board, cols, posDiag, negDiag);

    for (int i = 0; i < n; i++) {
        free(board[i]);
    }
    free(board);
    free(cols);
    free(posDiag);
    free(negDiag);

    return res;
}
