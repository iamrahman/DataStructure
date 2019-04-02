
//Algorithm:

//STEP 1: Declare the function appendNNode with parameters (Node* head, int n)
//STEP 2: Declare two variables Node * temp , t and point both of them to head.
//STEP 3: Declare int i = -n
//STEP 4: Repeat Step 5 and 6, while(temp->next != NULL)
//STEP 5: if(i>=0) t = t-> next.
//STEP 6: temp = temp-> next, i++.
//STEP 7: temp->next = head, head = t->next, and t-> next =NULL
//STEP 8: return head


#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

struct Node* head = NULL;

void insertLinkedList(int nodeData){
	
	Node* newNode = new Node();
	newNode->data = nodeData;
	newNode->next = head;
	head = newNode;
}


void display(){
	struct Node* ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<", ";
		ptr = ptr->next;
	}
}
Node *addLastNElementToFirst(Node* head, int position){
	
	Node* temp = head;
	Node* t = head;
	int i = -position;
	
	while(temp->next != NULL){
		if(i>=0){
			t = t->next;
		}
		temp = temp->next;
		i++;
	}
	temp->next = head;
	head = t->next;
	t->next = NULL;
	return head;
}
		
int main(){
	insertLinkedList(1);
	insertLinkedList(2);
	insertLinkedList(3);
	insertLinkedList(4);
	insertLinkedList(5);
	insertLinkedList(6);
	insertLinkedList(7);
	insertLinkedList(8);
	cout<<"Before:\n";
	display();
	head = addLastNElementToFirst(head, 3);
	cout<<"\nAfter:\n";
	display();
}
