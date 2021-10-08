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
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};

