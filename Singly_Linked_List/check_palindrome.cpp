#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};
struct Node* head;


void push(int new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = head; 
	head = new_node;
}

void InsertNode(int new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = head; 
	head = new_node; 
}

void display(){
	struct Node* traverse = head;
	while(traverse != NULL){
		cout<<traverse->data;
		push(traverse->data);
		traverse = traverse->next;
		
	}
}
	
int main(){
	InsertNode(4);
	InsertNode(3);
	InsertNode(2);
	InsertNode(1);
	cout<<"Linked List:\n";
	display();
	return 0;
}
