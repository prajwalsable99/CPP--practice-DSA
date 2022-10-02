#include <bits/stdc++.h>
#include <queue>
#include <stack>
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


int createSumtree(node* root){
	
	
	if(root==NULL){
		
		return 0;
	}
	
	int l=createSumtree(root->left);
	int r=createSumtree(root->right);
	int temp=root->data;
	root->data=l+r;
	
	
	return l+r+temp;
	
}

void inorder_rec(node* root){
	
	if(root==NULL){
		return;
	}
	
	inorder_rec(root->left);
	cout<< root->data<<" ";
	inorder_rec(root->right);
}
int main(){
	
	
	
	
	
	
	node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    inorder_rec(root);
    createSumtree(root);
    cout<<"\n";
    inorder_rec(root);
    
    
    
 	
}
