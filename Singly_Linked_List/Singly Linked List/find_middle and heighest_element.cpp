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
	
void display(){
	struct Node* ptr;
	ptr = head;
	while(ptr != NULL){
		cout<<"-->"<<ptr->data;
		ptr = ptr->next;
	}
}


//Algorithum for Finding middle Element
// Step:1 Initilize two pointer slow and fast
// Step:2 start from the head node and go till end
// Step:3 slow pointer will point to next node and fast will point to next to next node.
// Conclusion: When the fast pointer will be at the end the slow will be at the half position of linklist.

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
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	display();
	findMiddleElement();
	findLargestNode();
	return 0;
}
