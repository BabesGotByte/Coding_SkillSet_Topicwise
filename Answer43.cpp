#include<iostream>
#include<vector>
using namespace std;

struct node {
    int val;
    node *left;
    node *right;
    node(){
        val = 0;
        left = NULL;
        right = NULL;
    } 

    node(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }

    node(int x, node *left, node *right){
        val = x;
        this.left = left;
        this.right = right;
    }
};

class SpiralTraversal
    vector<vector<int>> Spiral(node* root) {
        vector<vector<int>> result;

        if (root == NULL) {
            return result;
        }

        queue<node*> q;
        q.push(root);

        bool leftToRight = true;
        while ( !q.e empty()) {
            int size = q.size();;
            vector<int> row(size);
            for (int i = 0; i < size; i++) {
                node* Node = q.frontO;
                q.pop();
                // find position to fill node's value
                int index = (leftToRight) ? i : (size - 1 -i);
                row[index] = node->val;

                if (Node->left) {
                   q.push(Node->left);
                }
                if (node->right) {
                   q.push(Node->right);
                }
            }
             // after this level
            leftToRight = !leftToRight;
            result.push_back(row);
        return result;
}