#include <bits/stdc++.h>
#include <queue>
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

void preorder_rec(node* root){
	
	if(root==NULL){
		return;
	}
	cout<< root->data<<" ";
	preorder_rec(root->left);
	preorder_rec(root->right);
}

void preorder_itr(node* root){
	
	if(root==NULL){
		return;
	}
	
	stack<node*> st;
	
	st.push(root);
	
	while(!st.empty()){
		
		node* temp=st.top();
		cout<<temp->data<< " ";
		
		st.pop();
		
		if(temp->right!=NULL){
			st.push(temp->right);
		}
		if(temp->left!=NULL){
			
			st.push(temp->left);
		}
		
		
	}
	
	
}


int main()
{
    // Let us create binary tree shown in above diagram
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    
    
 	preorder_rec(root);
 	cout<<endl;
 	preorder_itr(root);
 
  
    return 0;
}
