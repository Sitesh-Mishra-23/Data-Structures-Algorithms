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
        int maxheight = max(leftheight,rightheight);

        return maxheight+1;
    }

    bool isBalanced(TreeNode* root) {
       if(root==NULL){
        return true;
       } 

       int lefth = maxDepth(root->left);
       int righth = maxDepth(root->right);
       int diff = abs(lefth-righth);
       bool ans = (diff<=1);

       bool ans2 =isBalanced(root->left);
       bool ans3 =isBalanced(root->right);

       if(ans && ans2 && ans3){
        return true;
       }
       else{
        return false;
       }
    }
};