class Solution {
Public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        slow=slow->next;
        if(!fast->next){
            return NULL;
        }
        fast=fast->next->next;
        while(slow&&fast&&fast->next && slow!=fast){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=head;
        while(slow&&fast&&slow!=fast){
            slow=slow->next;aclass Solution {
public:
    ListNode* reverse(ListNode* head){    
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* pass = head;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        if(!fast->next){
            return true;
        }
        slow=slow->next;
        fast=fast->next->next;
        while(slow && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* q;
        if(!fast){
            q=reverse(slow);
        }
        else{
            slow=slow->next;
            q=reverse(slow);
        }
        while(q && head){
            if(q->val==head->val){
                head=head->next;
                q=q->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

            fast=fast->next;
        }
        return slow;
    }
};

