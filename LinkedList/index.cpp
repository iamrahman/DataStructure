#include<iostream>
#include<cstdlib>
 using namespace std;
 
struct Node
{
    int data;
    Node* next;
};
Node* head = NULL;
void insertNodeAtStarting(int number){
	
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = number;
	new_node->next = head;
	head = new_node;
}

void deleteNodeAtStarting(){
	head = head->next;
}

void insertNodeAtEnd(int number){
	
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = number;
	new_node->next = NULL;
	struct Node* start = head;
	while(start->next != NULL){
		start = start->next;
	}
	start->next = new_node;
}
	
void insertAtNthPosition(int number, int postion){
	
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node* start = head;
	new_node->data = number;
	
	for(int i =1;i<postion;i++){
		start = start->next;
	}
	new_node->next = start->next;
	start->next = new_node;
}
	
void displayNode(){
	Node* start = head;
	while(start != NULL){
		cout<<" =>"<<start->data;
		start = start->next;
	}
}

int main(){
	insertNodeAtStarting(5);
	insertNodeAtStarting(4);
	insertNodeAtStarting(3);
	insertNodeAtStarting(2);
	insertNodeAtStarting(1);
	deleteNodeAtStarting();
	insertNodeAtEnd(7);
	insertNodeAtEnd(8);
	insertNodeAtEnd(9);
	insertAtNthPosition(6,4);
	displayNode();
}
