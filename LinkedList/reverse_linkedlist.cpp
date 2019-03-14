#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};
struct Node* head;
void reverse() 
    {  
        Node *current = head; 
        Node *prev = NULL, *next = NULL;
  
        while (current != NULL) 
        { 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        head = prev; 
}

void push(int new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = head; 
	head = new_node; 
}

void display(){
	struct Node* traverse = head;
	while(traverse != NULL){
		cout<<traverse->data;
		traverse = traverse->next;
		
	}
}
	
int main(){
	push(4);
	push(3);
	push(2);
	push(1);
	cout<<"Linked List:\n";
	display();
	cout<<"\nAfter Reverse:\n";
	reverse();
	display();
	return 0;
}
