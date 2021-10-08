/* 
    Problem 30
    By: Sanchit Kalsi
    ID: DarkSoul26
    Description: Add two numbers
*/

#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

// recursive function
Node* addition(Node* temp1, Node* temp2, int size1,
			int size2)
{
	// creating a new Node
	Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));

	// base case
	if (temp1->next == NULL && temp2->next == NULL) {
		// addition of current nodes which is the last nodes
		// of both linked lists
		newNode->data = (temp1->data + temp2->data);

		// set this current node's link null
		newNode->next = NULL;

		// return the current node
		return newNode;
	}

	// creating a node that contains sum of previously added
	Node* returnedNode
		= (struct Node*)malloc(sizeof(struct Node));

	// if sizes are same then we move in both linked list
	if (size2 == size1) {
		returnedNode = addition(temp1->next, temp2->next,
								size1 - 1, size2 - 1);

		newNode->data = (temp1->data + temp2->data)
						+ ((returnedNode->data) / 10);
	}
	// or else we just move in big linked list
	else {
		returnedNode = addition(temp1, temp2->next, size1,
								size2 - 1);

		newNode->data
			= (temp2->data) + ((returnedNode->data) / 10);
	}

	returnedNode->data = (returnedNode->data) % 10;

	newNode->next = returnedNode;

	// return the current node
	return newNode;
}

void Display(Node* head)
{
	if (head == NULL) {
		return;
	}
	while (head->next != NULL) {
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << head->data << endl;
}

// Function to add two numbers represented by nexted list.
struct Node* addTwoLists(struct Node* head1,
						struct Node* head2){
	struct Node *temp1, *temp2, *ans = NULL;

	temp1 = head1;
	temp2 = head2;

	int size1 = 0, size2 = 0;

	// calculating the size of first linked list
	while (temp1 != NULL) {
		temp1 = temp1->next;
		size1++;
	}
	// calculating the size of second linked list
	while (temp2 != NULL) {
		temp2 = temp2->next;
		size2++;
	}

	Node* returnedNode
		= (struct Node*)malloc(sizeof(struct Node));

	// traverse the bigger linked list
	if (size2 > size1) {
		returnedNode = addition(head1, head2, size1, size2);
	}
	else {
		returnedNode = addition(head2, head1, size2, size1);
	}

	// creating new node if head node is >10
	if (returnedNode->data >= 10) {
		ans = (struct Node*)malloc(sizeof(struct Node));
		ans->data = (returnedNode->data) / 10;
		returnedNode->data = returnedNode->data % 10;
		ans->next = returnedNode;
	}
	else
		ans = returnedNode;

	// return the head node of linked list that contains
	return ans;
}



// Function that adds element at the end of the Linked List
void push(Node** head_ref, int d)
{
	Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = d;
	new_node->next = NULL;
	if (*head_ref == NULL) {
		new_node->next = *head_ref;
		*head_ref = new_node;
		return;
	}
	Node* last = *head_ref;
	while (last->next != NULL && last != NULL) {
		last = last->next;
	}
	last->next = new_node;
	return;
}

// Driver Program for above Functions
int main()
{
	// Creating two lists
	Node* first = NULL;
	Node* second = NULL;
	Node* sum = NULL;
	
	//take input of the linkedlist
	push(&first, 5);
	push(&first, 6);
	push(&first, 3);
	push(&second, 8);
	push(&second, 4);
	push(&second, 2);
	
	cout << "First List is as follows: ";
	Display(first);
	
	cout << "Second List is as follows: ";
	Display(second);
	
	sum = addTwoLists(first, second);
	cout << "Sum List is as follows: ";
	Display(sum);
	return 0;
}


