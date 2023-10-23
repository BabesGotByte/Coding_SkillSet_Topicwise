#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isMirror(TreeNode* left, TreeNode* right); // Function prototype

bool isSymmetric(TreeNode* root) {
    if (!root)
        return true;

    return isMirror(root->left, root->right);
}

bool isMirror(TreeNode* left, TreeNode* right) {
    if (!left && !right)
        return true;
    if (!left || !right)
        return false;
    
    return (left->val == right->val) &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    if (isSymmetric(root)) {
        std::cout << "The tree is symmetric." << std::endl;
    } else {
        std::cout << "The tree is not symmetric." << std::endl;
    }

    return 0;
}
