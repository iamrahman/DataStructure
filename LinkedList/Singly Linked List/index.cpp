#include <iostream>
#include <cstdlib> //This is required for using malloc in C++
using namespace std;

struct Node  //Define a Node
{
	int data;  //Store Data
	struct Node *next;  //Pointer points to next node
};

struct Node* head;   //Initilze the head Pointer

void insert(int new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = head; 
	head = new_node; 
	}

void insertAtEnd(int value){
	struct Node* last_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node* last = head;
	last_node->data = value;
	last_node->next = NULL;
	while(last->next != NULL){
		last = last->next;
	}
	last->next = last_node;
}

void insertAtNthPositioon(int value, int position){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    struct Node *temp = head;
    for(int i=1; i < position; i++) {
        if(temp->next != NULL) {
        temp = temp->next;
    }
}
newNode->next = temp->next;
temp->next = newNode;
    
}


void deleteElement(){
    head = head->next;
}

 void deleteElementLast(){
     struct Node* temp = head;
     while(temp->next->next!=NULL){
         temp = temp->next;
     }
     temp->next = NULL;
 }
	
void display(){
	struct Node* ptr;
	ptr = head;
	while(ptr != NULL){
		cout<<"-->"<<ptr->data;
		ptr = ptr->next;
	}
}

void findMiddleElement(){
    struct Node* slow = head;
    struct Node* fast = head;
    while(slow->next != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"\nMiddle Element is :"<<slow->data;
}

void findLargestNode(){
    struct Node* temp = head;
    int large = -1;
    while(temp->next != NULL){
        if(temp->data > large){
            large = temp->data;
        }
        temp = temp->next;
    }
    cout<<"\nLargest Element: "<<large;
}
	
int main(){
	insert(1);
	insert(2);
	insert(3);
	//insert(4);
	insert(5);
	insert(6);
	insert(7);
	insertAtNthPositioon(4,3);
	display();
	findMiddleElement();
	findLargestNode();
	return 0;
}
