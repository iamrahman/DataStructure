#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
struct Node* head = NULL;

void insertAtFront(int newNodeData){
	
  Node* newNode = new Node();
  newNode->data = newNodeData;
  newNode->next = head;
  head = newNode;
}

void swapAdjacent(){
  struct Node* ptr1 = head;
  struct Node* ptr2 = head;
  while(ptr1->next !=NULL){
    while(ptr2->next !=NULL){
      if(ptr2->data > ptr2->next->data){
        int temp = ptr2->data;
        ptr2->data = ptr2->next->data;
        ptr2->next->data = temp;
      }
      ptr2 = ptr2->next;
    }
    ptr1 = ptr1->next;
    ptr2 = head;
  }
}

void display(){
  struct Node* ptr = head;
  while(ptr != NULL){
    cout<<ptr->data<<" ";
    ptr = ptr->next;
  }
}

int main(){
  insertAtFront(1);
  insertAtFront(3);
  insertAtFront(2);
  insertAtFront(4);
  insertAtFront(5);
  cout<<"Before Swap\n";
  display();
  swapAdjacent();
  cout<<"\nAfter Swap\n";
  display();
}


