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
        int count=0;
        if(root==nullptr) return 0;
      //  int count1,count2;
        if ( root->left ==nullptr && root->right ==nullptr ){
          
          count++;
          return count;
           
          //  maxDepth(root->right);
        }
        if(root->left !=nullptr ||root->right!=nullptr){
            count++;
        }
      int rightlength=  maxDepth(root->right);
     int leftlength =  maxDepth(root->left);
        count =1+max(rightlength,leftlength);
        return count;
    }
};
