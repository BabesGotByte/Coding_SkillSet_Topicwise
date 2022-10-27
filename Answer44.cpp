#include <bits/stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* left;
    node* right;
};

//using recursion to find the depth of left subtree and right subtree and taking maximum of them and adding 1 to count for the root node.
int maxDepth(node* node)
{
    if (node == NULL)
        return 0;
    else {
        int leftDepth = maxDepth(node->left);
        int rightDepth = maxDepth(node->right);
        if (leftDepth > rightDepth)
            return (leftDepth + 1);
        else
            return (rightDepth + 1);
    }
}
