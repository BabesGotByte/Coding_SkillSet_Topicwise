class Solution{
    public:
        void deleteNode(Node *del)
            {
                if(del->next!=NULL)
                {
                    *del=*del->next;
                    return;
                }
                del=NULL;
            }
}