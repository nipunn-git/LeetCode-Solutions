/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void helper(struct TreeNode* root, int* result, int* returnSize) 
{
    if (root == NULL) return;
    
    helper(root->left, result, returnSize);
    result[(*returnSize)++] = root->val;
    helper(root->right, result, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) 
{
    *returnSize = 0;
    int* result = (int*)malloc(100 * sizeof(int));
    helper(root, result, returnSize);
    return result;
}