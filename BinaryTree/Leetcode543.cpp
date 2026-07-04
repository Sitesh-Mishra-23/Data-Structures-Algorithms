/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftheight = maxDepth(root->left);
        int rightheight =maxDepth(root->right);
        int maxh = max(leftheight,rightheight)+1;

        return maxh;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int option1 = diameterOfBinaryTree(root->right);
        int option2 = diameterOfBinaryTree(root->left);
        int maxheight = maxDepth(root->right)+maxDepth(root->left);

        return max(option1,max(option2,maxheight));
    }
};