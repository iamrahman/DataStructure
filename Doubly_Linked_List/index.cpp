#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *prev; 
   struct Node *next; 
}; 
struct Node* head = NULL; 
void insert(int newdata) { 
   Node* newnode = new Node(); 
   newnode->data  = newdata; 
   newnode->prev = NULL; 
   newnode->next = head;     
   if(head !=  NULL) 
      head->prev = newnode ;     
   head = newnode; 
}   

void insertAtNthPosition(int newdata, int position){
	
	Node* newnode = new Node();
	newnode->data = newdata;
	struct Node* ptr;
	ptr = head;
	
	for(int i=1; i<position-1; i++){
		ptr = ptr->next;
	}
	
	newnode->prev = ptr;
	newnode->next = ptr->next;
	ptr->next = newnode;
	ptr->next->prev = newnode;
	
}

void insertAtEnd(int newdata){
	
	Node* newnode = new Node();
	newnode->data = newdata;
	struct Node* ptr =head;
	
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	newnode->next = NULL;
	newnode->prev = ptr;
	ptr->next = newnode;
	
}

void display() { 
   struct Node* ptr;
   ptr = head;  
   while(ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
  } 
}
 
int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   insertAtNthPosition(8,6);
   insertAtEnd(10);
   cout<<"The doubly linked list is: ";
   display(); 
   return 0; 
} 
