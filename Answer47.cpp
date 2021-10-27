class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return NULL;
        }
        if(root==p || root==q){
            return root;
        }
        TreeNode* n= lowestCommonAncestor(root->left,p,q);
        TreeNode* m= lowestCommonAncestor(root->right,p,q);
        if(n && m){
            return root;
        }
        else if(n){
            return n;
        }
        else{
            return m;
        }
    }
};
