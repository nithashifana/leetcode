/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    else {
        return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
}