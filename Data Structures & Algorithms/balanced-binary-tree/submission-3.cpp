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
pair<bool,int>tofind(TreeNode * root){
    if(root==nullptr)return {true,0};
    pair <bool,int> left= tofind(root->left);
    pair<bool,int> right=tofind(root->right);
    bool isbalanced= left.first &&right.first && abs(left.second-right.second)<=1;
    int maxheight=max(left.second ,right.second)+1;
    return {isbalanced,maxheight};
}
    bool isBalanced(TreeNode* root) {

       return tofind(root).first;
    }
};
