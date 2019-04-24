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

void swap(int *d1, int *d2) 
{ 
    int temp; 
    temp = *d1; 
    *d1 = *d2; 
    *d2 = temp; 
} 

void pairWiseSwap(struct Node *head) 
{ 
    struct Node *temp = head; 
  
    while (temp != NULL && temp->next != NULL) 
    { 
        
        swap(&temp->data, &temp->next->data);
        
                   //OR
                    
        //int temp_data = temp->data;
        //temp->data = temp->next->data;
        //temp->next->data = temp_data;
        
        temp = temp->next->next; 
    } 
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
	pairWiseSwap(head);
	cout<<"\nAfter:\n";
	display();
}
