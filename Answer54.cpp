class Solution {
public:
    bool symm(TreeNode* l, TreeNode* r){
        if(!l && !r){
            return true;
        }
        if(!l || !r){
            return false;
        }
        if(l->val == r->val){
            return symm(l->left,r->right)&&symm(l->right,r->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return symm(root->left,root->right);
    }
};
