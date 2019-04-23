#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	struct Node* next; 
}; 
struct Node* head = NULL;

void insert(int newdata){
	
	Node* newNode = new Node();
	newNode->data = newdata;
	newNode->next = head;
	head = newNode;
}

void display(){
	Node* ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<"=>";
		ptr = ptr->next;
	}
}

void detectLoop(){
	if (head == NULL || head->next == NULL){
		cout<< "\nNo Lopp Found in Linked List";
	}
	else{
		Node* slow = head;
		Node* fast = head->next;
		while((fast && fast->next) && fast != NULL){
			if(fast == slow){
				cout<<"Loop Found";
				break;
			}
			fast = fast->next->next;
			slow = slow->next;
		}
		if(fast->next == NULL){
			cout<<"Not Found";
		}
	}
}

int main() 
{ 
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	
	//Created a Loop for Testing, Comment the next line to check the unloop linkedlist
	head->next->next->next->next = head->next;
	
	detectLoop();
	//If you uncomment the display function and make a loop in linked list and then run the code you will find infinite loop 
	//display();
} 
