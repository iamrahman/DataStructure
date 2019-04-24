#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

struct Node* head = NULL;

void Insert(int newData){
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = head;
	head = newNode;
}

void insertAtEnd(int value){
	Node* last_node = new Node();
	struct Node* last = head;
	last_node->data = value;
	last_node->next = NULL;
	while(last->next != NULL){
		last = last->next;
	}
	last->next = last_node;
}

void display(){
	struct Node* ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}

void rotateRight(){
	struct Node* ptr = head;
	struct Node* ptr1 = head;
	int last;
	
	while(ptr != NULL){
		last = ptr->data;
		ptr = ptr->next;
	}
	
	while(ptr1->next->next != NULL){
		ptr1 = ptr1->next;
	}
	
	Insert(last);
	ptr1->next = NULL;
}

void rotateLeft(){
	insertAtEnd(head->data);
	head = head->next;
}

int main(){
	Insert(5);
	Insert(4);
	Insert(3);
	Insert(2);
	Insert(1);
	cout<<"Before Rotation\n";
	display();
	cout<<"\n\nRight Rotation\n";
	rotateRight();
	display();
	cout<<"\n\nLeft Rotation to resultant Linked List\n";
	rotateLeft();
	display();
}
