#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};
int height =0;
Node* makeNode(int data){
	
	Node* newchild = new Node();
	newchild->data = data;
	newchild->left = NULL;
	newchild->right = NULL;
	return (newchild);
}

void breadthFirstSearch(Node* root, int key){
	if(root != NULL){
		breadthFirstSearch(root->left, key);
		if(root->data == key){
			cout<<"Element Found";
		}
		breadthFirstSearch(root->right, key);
	}		
}


int main(){
	
	int key;
	Node *root = makeNode(10);
	root->left = makeNode(5);
	root->right = makeNode(15);
	root->left->left = makeNode(2);
	root->left->right = makeNode(8);
	root->right->left = makeNode(12);
	root->right->right = makeNode(18);
	cout<<"Breadth First Search: \n";
	cout<<"Enter the Number to search\n";
	cin>>key;
	breadthFirstSearch(root, key);
}

