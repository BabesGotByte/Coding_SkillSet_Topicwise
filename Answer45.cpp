#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int d) : data(0), left(nullptr), right(nullptr){}
};

int find_diameter(node *root, int & h){
    int left_height = 0, right_height = 0;
    if(root == nullptr){
        h = 0;
        return 0;
    }

    int left_diameter = find_diameter(root->left, left_height);
    int right_diameter = find_diameter(root->right, right_height);

    h = max(left_height, right_height) + 1;
    return max(left_height + right_height + 1, max(left_diameter, right_diameter)); 
}

int main(){
    node *root = new node(4);
    root->left = new node(5);
    root->right = new node(6);
    root->left->left = new node(1);
    root->left->right = new node(7);
    root->right->right = new node(8);
    root->right->right->right = new node(10);
    /* The Binary Tree
                         4
                  5           6
              1       7           8
                                      10  
    */
    int initial_height = 0;
    cout<<"Diameter of the tree is: "<<find_diameter(root, initial_height)<<endl;
    return 0;
}
