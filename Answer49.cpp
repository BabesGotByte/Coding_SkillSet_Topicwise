class Solution {
public:
    int maxPathUtil(int &ans, TreeNode* root){
        if(!root)
            return 0;
        int left = maxPathUtil(ans,root->left);
        int right = maxPathUtil(ans,root->right);
        ans = max(ans,max(left+right,max(left,max(right,0)))+root->val);
        return max(0,max(left,right))+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxPathUtil(ans,root);
        return ans;
    }
};
