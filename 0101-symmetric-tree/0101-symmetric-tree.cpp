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
    bool isMiror(TreeNode* p1,TreeNode* p2){
        if(p1==nullptr && p2==nullptr)  return true;
        if(p1==nullptr || p2==nullptr || p1->val != p2->val)    return false;

        return isMiror(p1->left,p2->right) && isMiror(p1->right,p2->left) ;
    }


    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        

        return isMiror(root->left,root->right);
    }
};