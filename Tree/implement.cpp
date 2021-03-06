#include <iostream>
using namespace std;

struct tree    //Define a Tree Node
{
    tree *left, *right;     //left point left child and right points right child
    int data;   // store data
}
*root = NULL, *p = NULL, *np = NULL, *q;
 
void create()
{
    int value,c, num = 0;
    cout<<"Enter the Number of node you want to Insert in Tree.\n";
    cin>>num;
    while (c < num)
    {
        if (root == NULL)
        {
            root = new tree;
            cout<<"enter value of root node\n";
            cin>>root->data;
            root->right=NULL;
            root->left=NULL;
        }
        else
        {
            p = root;
            cout<<"enter value of node\n";
            cin>>value;
            while(true)
            {
                if (value < p->data)
                {
                    if (p->left == NULL)
                    {
                        p->left = new tree;
                        p = p->left;
                        p->data = value;
                        p->left = NULL;
                        p->right = NULL;
                        cout<<"value entered in left\n";
                        break;
                    }
                    else if (p->left != NULL)
                    {
                        p = p->left;
                    }
                }
                else if (value > p->data)
                {
                    if (p->right == NULL)
                    {
                        p->right = new tree;
                        p = p->right;
                        p->data = value;
                        p->left = NULL;
                        p->right = NULL;
                        cout<<"value entered in right\n";
                        break;
                    }
                    else if (p->right != NULL)
                    {
                        p = p->right;
                    }
               }
           }
        }
        c++;
    }
}
void inorder(tree *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        cout<<p->data<<endl;
        inorder(p->right);
    }
    else{
		cout<<"Inorder Not Possiple Because Tree is Empty\n\n";
	}
}
void preorder(tree *p)
{
    if (p != NULL)
    {
        cout<<p->data<<endl;
        preorder(p->left);
        preorder(p->right);
    }
    else{
		cout<<"Preorder Not Possiple Because Tree is Empty\n\n";
	}
}
void postorder(tree *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<endl;
    }
    else{
		cout<<"Postorder Not Possiple Because Tree is Empty\n\n";
	}
}
int main()
{
    create();
    cout<<"Inorder Traversing\n";
    inorder(root);
    cout<<"Preorder Traversing\n";
    preorder(root);
    cout<<"Postorder Traversing\n";
    postorder(root);
    cout<<"Height of the Tree\n"
    return 0;   
}
