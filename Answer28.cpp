#include <iostream>

using namespace std;

class Node {
    public:
        int data;
    Node * next;
};

void print_list(Node * n) {
  cout <<"\n";
  if(n!= NULL){
    while (n != NULL) {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout << "NULL";
  }
  else
  {
    cout << "NULL";
  }
} 

void append(Node ** head_ref, int new_data) {     // This function is to append an element after the last element added
    Node * new_node = new Node();
    Node * last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
}

// Function for deleting nth element from last element

bool deleteele(Node ** head_ref, int nele)    //this function is to delete nth element from the last element
{
    Node * temp = * head_ref;
    Node * temp2 = * head_ref;
    Node * temp3;
    int n;
    n=0;
    while(temp!= NULL)
    {
          n = n+1;
          temp = temp->next;
    }
    if(nele==(n-1))              //we are using this for checking if it is a head node because we need not include head 
    {
      *head_ref = temp2->next;
      cout << "\nAfter deleting";
      return true;                //we are returning beacause we need to know it anything had happened or not 
    }
    else if(nele>=n)         
    {
      cout << "\nThe no of elements should no exceed total elements";
      return false;
    }
    else
    {
    nele = n - nele ;         // we use this formula to find the nth element from end from the starting of the linked list
    int k;
    k =0; 
   while(temp2->next!=NULL)  //Going to the node
   {
      k = k+1; 
      if(k!=nele)
      {
        temp3 = temp2;      // Going before the element where we found so that we can just mov the next to next element 
        temp2 = temp2->next;
      }
      else
      {
        break;
      }
   }
   temp3->next = temp2->next;
   cout << "After Deleting";
   return true;
   }

}

int main() {
    int n,n1;
    int h;                                
    Node * head = NULL;                         //we will consider from last element not itself
    head = new Node();
    cout << "Enter the data for head : ";
    cin >> n;
    head->data=n;
    head->next = NULL;
    h =1;

    while(h)                                      //this is to get the input of elements
    {
      cout << "Enter the element : ";
      cin >> n1;
      append(&head, n1);
      cout << "do you want to continue (0/1): ";
      cin >> h;
    }

    print_list(head);
    cout << "\nEnter element from back you want to delete : ";
    cin >> n;
    int t = deleteele(&head,n);   // Deleting 3rd node from the end
    if(t)
    {
    print_list(head);
    }
}
