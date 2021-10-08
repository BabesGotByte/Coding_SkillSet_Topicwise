class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){
            return NULL;
        }
        ListNode* temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        k=k%count;
        if(k==0){
            return head;
        }
        k=count-k;
        k--;
        temp=head;
        ListNode* prev;
        while(k--){
            temp=temp->next;
        }
        prev=temp->next;
        temp->next=NULL;
        ListNode* q=prev;
        while(prev->next){
            prev=prev->next;
        }
        prev->next=head;
        return q;
    }
};
