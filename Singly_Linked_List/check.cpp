#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
struct Node* head = NULL;

void insertAtFront(int newNodeData){
	
	Node* newNode = new Node();
	newNode->data = newNodeData;
	newNode->next = head;
	head = newNode;
}

void insertAtEnd(int newNodeData){
	Node* newNode = new Node();
	struct Node* ptr = head;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	newNode->data = newNodeData;
	ptr->next = newNode;
	newNode->next = NULL;
}

void display(){
	struct Node* ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<", ";
		ptr = ptr->next;
	}
}

void insertAtNthPositioon(int newNodeData, int position){
	
	struct Node* ptr = head;
	Node* newNode = new Node();
	newNode->data = newNodeData;
	for(int i=1;i<position;i++){
		if(newNode->next != NULL){
			ptr = ptr->next;
		}
	}
	newNode->next = ptr->next;
	ptr->next = newNode;
}

void deleteFromFront(){
	head = head->next;
}

void DeleteNthNode(int position){
	
	struct Node* ptr = head;
	for(int i=1; i<position-1; i++){
		ptr = ptr->next;
	}
	ptr->next = ptr->next->next;
}

void DeleteFromEnd(){
	
	struct Node* ptr = head;
	while(ptr->next->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = NULL;
	
}

int main(){
	insertAtFront(8);
	insertAtFront(7);
	insertAtFront(5);
	insertAtEnd(9);
	insertAtEnd(10);
	insertAtNthPositioon(6, 2);
	deleteFromFront();
	DeleteNthNode(2);
	DeleteFromEnd();
	display();
}
