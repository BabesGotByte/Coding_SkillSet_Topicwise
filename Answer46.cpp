class Solution {
public:
    int isBalance(TreeNode* root) {
        if(!root){
            return 0;
        }        
        int l=isBalance(root->left);
        if(l==-1){
            return -1;
        }
        int r=isBalance(root->right);
        if(r==-1){
            return -1;
        }
        
        if(abs(l-r)>1){
            return -1;
        }
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int temp=isBalance(root);
        if(temp!=-1){
            return true;
        }
        return false;
    }
};
