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

void inorder_rec(node* root){
	
	if(root==NULL){
		return;
	}
	
	inorder_rec(root->left);
	cout<< root->data<<" ";
	inorder_rec(root->right);
}

void inorder_itr(node* root){
	
	if(root==NULL){
		return;
	}
	
	stack<node*> st;
	
	node* curr=root;
	
	while(!st.empty() || curr!=NULL){
		
		if(curr!=NULL){
			
			st.push(curr);
			curr=curr->left;
		}
		else{
			curr=st.top();
			
			cout<<curr->data<< " ";
		
			st.pop();
			curr = curr->right;
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
    
    
    
 	inorder_rec(root);
 	cout<<endl;
 	inorder_itr(root);
 
  
    return 0;
}
