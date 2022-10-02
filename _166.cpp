#include <bits/stdc++.h>

using namespace std;
struct node{
	
	int data;
	node* left;
	node* right;
};

node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
 
void mirror(node* root){
	
	if(root==NULL){
		return ;
	}
	
	mirror(root->left);
    mirror(root->right);
	
	node* temp;
	temp=root->right;
	root->right=root->left;
	root->left=temp;


}
void inOrder( node* n)
{
    if (n == NULL)
        return;
     
    inOrder(n->left);
    cout << n->data << " ";
    inOrder(n->right);
}
int main()
{
    // Let us create binary tree shown in above diagram
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
 
    inOrder(root);
   mirror(root);
   cout<<"\n";
   inOrder(root);
    return 0;
} 
