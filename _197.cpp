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


node* search(node* root,int key){
	
	
	if(root==NULL or root->data==key){
		
		return root;
	}
	
	
	if(root->data>key){
		
		return search(root->left, key);
	}
	else{
		return search(root->right, key);
	}
	
	
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
	
	
	
	
	
	
	node* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);
    root->left->left = newNode(1);
    root->left->right = newNode(7);
    inorder_rec(root);
    
    node* x=search(root,15);
    if(x){
    	
    	cout<<"\nfound";
	}else{
		cout<<" \nnot found";
	}
    
    
    
    
    
 	
}
