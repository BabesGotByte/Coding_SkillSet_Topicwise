//Flattening a Linked List (C++)
//Time Complexity: O(n*m)
//Space Complexity: O(1)

Node* merge(Node* root,Node* root_next){
    Node* current=new Node(-1);
    Node* temp=current;
    while(root!=NULL&&root_next!=NULL){
        if(root->data<=root_next->data){
            current->bottom=root;
            current=current->bottom;
            root=root->bottom;
        }
        else{
            current->bottom=root_next;
            current=current->bottom;
            root_next=root_next->bottom;
        }
        if(root==NULL){
            current->bottom=root_next;
        }
        else if(root_next==NULL){
            current->bottom=root;
        }
    }
    return temp->bottom;
}    
    
    
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL){
       return root;
   }
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
}
