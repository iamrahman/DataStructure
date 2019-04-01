#include <iostream> 
using namespace std; 

struct Node 
{ 
	int data; 
	struct Node *next; 
}; 

struct Node *insertInEmptyCircularLinkedList(struct Node *last, int data) 
{ 
	 
	if (last != NULL) 
	return last; 

	Node* temp = new Node(); 
	
	temp -> data = data; 
	last = temp;
	
	last -> next = last; 

	return last; 
} 

struct Node *insertAtBegin(struct Node *last, int data) 
{ 
	if (last == NULL) 
		return insertInEmptyCircularLinkedList(last, data); 

	Node* temp = new Node();

	temp -> data = data; 
	temp -> next = last -> next; 
	last -> next = temp; 

	return last; 
} 

struct Node *inserAtEnd(struct Node *last, int data) 
{ 
	if (last == NULL) 
		return insertInEmptyCircularLinkedList(last, data); 
	
	Node* temp = new Node();
	temp -> data = data; 
	temp -> next = last -> next; 
	last -> next = temp; 
	last = temp; 

	return last; 
} 

struct Node *insertAfterANode(struct Node *last, int data, int item) 
{ 
	if (last == NULL) 
		return NULL; 
		
	struct Node *p; 
	p = last -> next; 
	do
	{ 
		if (p ->data == item) 
		{ 
			Node* temp = new Node();
			temp -> data = data; 
			temp -> next = p -> next; 
			p -> next = temp; 

			if (p == last) 
				last = temp; 
			return last; 
		} 
		p = p -> next; 
	} while(p != last -> next); 

	cout << item << " Not Present" << endl; 
	return last; 

} 

void display(struct Node *last) 
{ 
	struct Node *p; 

	if (last == NULL) 
	{ 
		cout << "Empty Circular Linked List." << endl; 
		return; 
	} 

	p = last -> next; 

	do
	{ 
		cout << p -> data << " "; 
		p = p -> next; 

	} 
	while(p != last->next); 

} 

int main() 
{ 
	struct Node *last = NULL; 

	last = insertInEmptyCircularLinkedList(last, 6); 
	last = insertAtBegin(last, 4); 
	last = insertAtBegin(last, 2); 
	last = inserAtEnd(last, 8); 
	last = inserAtEnd(last, 12); 
	last = insertAfterANode(last, 10, 8); 

	display(last); 

	return 0; 
} 
