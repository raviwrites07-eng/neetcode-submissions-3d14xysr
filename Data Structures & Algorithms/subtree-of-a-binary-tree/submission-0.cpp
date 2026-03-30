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
bool same(TreeNode *root,TreeNode * subRoot){
    if(root==NULL&&subRoot==NULL)return true;
    if(root==NULL ||subRoot ==NULL)return false;
    if(root->val != subRoot->val)return false;

    bool lefty= same(root->left,subRoot->left);
    bool righty=same(root->right,subRoot->right);

    return lefty &&righty ;
       
    
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)return false;
        bool ans=same(root,subRoot);
        bool r1=isSubtree(root->right,subRoot);
        bool l1=isSubtree(root->left,subRoot);
         return r1||l1||ans ;
    }
};
