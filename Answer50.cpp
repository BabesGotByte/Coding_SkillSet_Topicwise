class Solution {
public:
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& p, int s, int e) {
        if(s > e) {
            return NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[p]);
        int i = s;
        
        for (; i <= e; i++) {
            if(inorder[i] == preorder[p]) {
                break;
            }
        }
        
        ++p;
        root->left = helper(preorder, inorder, p, s, i - 1);
        root->right = helper(preorder, inorder, p, i + 1, e);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int p = 0;
        return helper(preorder, inorder, p, 0, inorder.size() - 1);
    }
};