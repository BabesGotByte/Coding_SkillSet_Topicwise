//Q31) Find intersection point of Y LinkedList.
// only the functional implementation

Node* intersectionPoint(Node* head1, Node* head2) {
   Node* p =head1;
   Node* q = head2;
   while(p != q) {
       if(p == NULL) p =head2;
       else p = p->next;
       if(q == NULL) q = head1;
       else q = q->next;
   }
   return p;
}
