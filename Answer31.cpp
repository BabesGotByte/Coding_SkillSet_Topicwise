// find the value at the intersection point/node of 2 linked lists. (Y Linked List)

class Solution{
    public:
        int intersectionPoint(Node* head1, Node* head2)
        {
            unordered_set<Node*> s;
            Node *temp1=head1, *temp2=head2;
            while(temp1!=NULL){
                s.insert(temp1);
                temp1 = temp1->next;
            }

            while(temp2!=NULL)
            {
                if(s.find(temp2) != s.end())
                return temp2->data;
                temp2 = temp2->next;
            }

        }
}