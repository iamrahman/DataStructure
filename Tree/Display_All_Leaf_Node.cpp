#include <iostream> 
using namespace std; 
  
struct node  
{  
    int data;  
    node* left;  
    node* right;  
};  
  

void displayLeafNode(node* p)  
{  
    if((p->left == NULL) && (p->right == NULL)){
		cout<<p->data;
		return;
	}
	if(p->left != NULL){
		displayLeafNode(p->left);
	}
	if(p->right != NULL){
		displayLeafNode(p->right);
	}
}  
  

node* newNode(int data)  //Build a Tree using this function
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
      
    return(Node);  
}  
      
  
int main()  
{  
    node *root = newNode(1);  
  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);  
    root->left->right->right = newNode(7);
    root->left->right->right->right = newNode(8);   
      
    displayLeafNode(root);
    return 0;  
}  
  
