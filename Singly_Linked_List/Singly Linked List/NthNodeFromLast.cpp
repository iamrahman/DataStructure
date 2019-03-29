#include <iostream>
#include <cstdlib> //This is required for using malloc in C++
using namespace std;

struct Node  //Define a Node
{
	int data;  //Store Data
	struct Node *next;  //Pointer points to next node
};

struct Node* head;   //Initilze the head Pointer

void insert(int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = head; 
	head = new_node; 
}
	
void display()
{
	struct Node* ptr;
	ptr = head;
	while(ptr != NULL){
		cout<<"-->"<<ptr->data;
		ptr = ptr->next;
	}
}

void NthNodeFromLast(int N){
	struct Node* ptr = head;
	struct Node* new_ptr = head;
	int count = 1;
	while(ptr->next != NULL){ //Count the Number of Element in Linked List
		ptr = ptr->next;
		count++;
	} 
	N = count-N; //It will indicate the same Nth node but from starting
	while(N != 0){
		new_ptr = new_ptr->next;
		N--;
	}
	cout<<"\n"<<new_ptr->data;
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	display();
	NthNodeFromLast(5);
	return 0;
}
