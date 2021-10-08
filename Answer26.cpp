#include <iostream>

template <typename T>
class node {
	public:
    	struct node* next;
    	T value;

		node(T value, node* next) {
			this->value = value;
			this->next = next;
		}

		node(T value) {
			this->value = value;
			this->next = nullptr;
		}
};

/*
	Returns the middle node for a given linked list.
	This implementation is not thread-safe.
*/
template <typename T>
node<T>* getMiddleNode(node<T>* list) {
	node<T>* middle = list;
	int count = 0;

	// Count list elements
	while(list) {
		list = list->next;
		count++;
	}

	std::cout << "COUNT " << count << std::endl;

	// Jump to the middle element
	while(count > 1 && middle) {
		middle = middle->next;
		count -= 2;
	}

	return middle;
}

int main() {
	// 9 -> 8 -> 7 -> 6 -> 5
	node<int> a(5);
	node<int> b(6, &a);
	node<int> c(7, &b);
	node<int> d(8, &c);
	node<int> e(9, &d);

	std::cout << getMiddleNode(&e)->value << std::endl;
	
	return 0;
}
