#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* makeNode(int data){
	Node* newchild = new Node();
	newchild->data = data;
	newchild->left = NULL;
	newchild->right = NULL;
	return (newchild);
}

void inorderTraversal(Node* root){
	if(root != NULL){
		inorderTraversal(root->left);
		cout<<root->data<<", ";
		inorderTraversal(root->right);
	}
}

void preorderTraversal(Node* root){
	if(root != NULL){
		cout<<root->data<<", ";
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
}

void postorderTraversal(Node* root){
	if(root != NULL){
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		cout<<root->data<<", ";
	}
}

int main(){
	
	Node *root = makeNode(10);
	root->left = makeNode(5);
	root->right = makeNode(15);
	root->left->left = makeNode(2);
	root->left->right = makeNode(8);
	root->right->left = makeNode(12);
	root->right->right = makeNode(18);
	cout<<"Inorder traversal\n";
	inorderTraversal(root);
	cout<<"\nPreorder traversal\n";
	preorderTraversal(root);
	cout<<"\nPostorder traversal\n";
	postorderTraversal(root);
}

