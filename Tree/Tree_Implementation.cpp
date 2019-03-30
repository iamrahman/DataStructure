#include <iostream> 
using namespace std; 
  
struct Tree  
{  
    int data;  
    Tree* left;  
    Tree* right;  
}; 
struct Tree *root = NULL;

Tree* newNode(int data)  //Build a Tree using this function
{  
    Tree* Node = new Tree(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
      
    return(Node);  
} 

void insertNode(Tree *root){
	
	char ch;
	int left, right;
	cout<<"Do you want to Insert at Left or Right\n";
	cin>>ch;
	if(ch=='l'){
		cout<<"Enter Number\n";
		cin>>left;
		root->left = newNode(left);
		Tree *root_left = root->left;
		insertNode(root_left);
		//insertNode(root_left->right);
	}
	else if(ch=='r'){
		cout<<"Enter Number\n";
		cin>>right;
		root->right = newNode(right);
		Tree *root_right = root->right;
		insertNode(root_right);	
		//insertNode(root_right->left);
	}
}

void inorder(Tree *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        cout<<p->data<<endl;
        inorder(p->right);
    }
   
}


int main(){
	int number;
	cout<<"Enter the root Node\n";
	cin>>number;
	Tree *root = newNode(number);
	insertNode(root);
	cout<<"\nInorder Traversel\n";
	inorder(root);
}
