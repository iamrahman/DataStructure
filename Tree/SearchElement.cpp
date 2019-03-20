#include <iostream> 
using namespace std; 
  
struct node  
{  
    int data;  
    node* left;  
    node* right;  
};  
  

int findElement(node* p, int element)  
{  
    if (p == NULL){  
        return false;
	}  
    if(p->data == element){
		return true;
	}
	else{
		int r1 = findElement(p->left, element);
		int r2 = findElement(p->right, element);
		return r1 || r2;
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
	int element;
    node *root = newNode(1);  
  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);  
    root->left->right->right = newNode(7);
    root->left->right->right->right = newNode(8);   
      
    cout << "Enter the Element you want to search\n";
    cin>>element; 
    if(findElement(root, element))
		cout<<"Element found\n";
	else
	    cout<<"Element Not Found\n";
    return 0;  
}  
  
