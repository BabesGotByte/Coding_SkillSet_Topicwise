class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        if (head == NULL || head->next == NULL)
            return head;

        //store k nodes;
        ListNode* cur = head;
        int c = 0;

        //to store kth node
        for (int i = 0; i < k && cur != NULL ; i++) {
            cur = cur->next;
            c++;
        }

        if (c != k) {
            return head;
        }

        //reverse but only k nodes
        ListNode* prev = NULL;
        ListNode* t = head;
        c = 0;
        while (c != k) {
            ListNode* nxt = t->next;
            t->next = prev;
            prev = t;
            t = nxt;
            c++;
        }

        //reverse remaining groups and get the head of final linked list
        ListNode* rest_h = reverseKGroup(cur, k);

        head->next = rest_h;
        return prev;

    }
};