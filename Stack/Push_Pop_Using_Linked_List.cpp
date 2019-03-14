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
	
void pop(){
	head = head->next;
}

void display(){
	struct Node* traverse = head;
	while(traverse != NULL){
		cout<<"=>"<<traverse->data;
		traverse = traverse->next;
		
	}
}
	
int main(){
	push(4);
	push(3);
	push(2);
	push(1);
	pop();
	pop();
	display();
	return 0;
}
