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


void reverse_level_traversal(node* root){
	
	
	queue<node*> q;
	stack<node*> s;
	
	
	q.push(root);

	
	while(!q.empty()){
		
		node* temp=q.front();
		
		q.pop();
		s.push(temp);
		
		if(temp->right!=NULL){
			q.push(temp->right);
		}
		if(temp->left!=NULL){
			
			q.push(temp->left);
		}
			
	}
	
		while(!s.empty()){
			
			node* t=s.top();
			cout<<t->data<<" ";
			s.pop();
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
    
    
    
 reverse_level_traversal(root);
 	cout<<endl;	
 
  
    return 0;
}
