class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        int count1=0,count2=0;
        while(t1){
            count1++;
            t1=t1->next;
        }
        while(t2){
            count2++;
            t2=t2->next;
        }
        if(count1>=count2){
            ListNode* p=l1;
            ListNode* q=l2;
            ListNode* temp;
            int sum=0,carry=0;
            while(p&&q){
                sum=(p->val+q->val+carry)%10;
                carry=(p->val+q->val+carry)/10;
                p->val=sum;
                temp=p;
                p=p->next;
                q=q->next;
            }
            while(p){
                sum=(p->val+carry)%10;
                carry=(p->val+carry)/10;
                p->val=sum;
                temp=p;
                p=p->next;
            }
            if(carry){
                temp->next=new ListNode(carry);
                temp=temp->next;
            }
            return l1;
        }
        else{
            ListNode* p=l1;
            ListNode* q=l2;
            ListNode* temp;
            int sum=0,carry=0;
            while(p&&q){
                sum=(p->val+q->val+carry)%10;
                carry=(p->val+q->val+carry)/10;
                q->val=sum;
                temp=q;
                p=p->next;
                q=q->next;
            }
            while(q){
                sum=(q->val+carry)%10;
                carry=(q->val+carry)/10;
                q->val=sum;
                temp=q;
                q=q->next;
                
            }
            if(carry){
                temp->next =new ListNode(carry);
                temp=temp->next;
            }
            return l2;
        }   
        
    }
};
