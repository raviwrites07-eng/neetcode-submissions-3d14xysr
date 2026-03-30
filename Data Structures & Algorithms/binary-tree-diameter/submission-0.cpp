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
int height(TreeNode* root){
if(root==nullptr)return 0;
int leftheight= height(root->left);
int rightheight=height(root->right);
return 1+max(leftheight,rightheight);


}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int inleft_tree=diameterOfBinaryTree(root->left);
        int inright_tree=diameterOfBinaryTree(root->right);
        int bothtree=height(root->left)+height(root->right);
        int count=max(bothtree,max(inleft_tree,inright_tree));
        return count;
    }
};
