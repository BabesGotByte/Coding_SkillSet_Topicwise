class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* d = dummy;
        while(l1!=NULL and l2!=NULL){
            if(l1->val<=l2->val){
                d->next = l1;
                d=d->next;
                l1=l1->next;
            }
            else{
                d->next=l2;
                d=d->next;
                l2=l2->next;
            }
        }
        if(l1!=NULL)
            d->next=l1;
        if(l2!=NULL)
            d->next=l2;
        return dummy->next;
    }
};
