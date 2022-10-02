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


void leftView(node* root){
	
	if(root==NULL){
	    
	    return ;
	}
	int size;
	node* temp;
	queue<node*> q;
	
	q.push(root);
	
	while(!q.empty()){
		
		size=q.size();
		
		for(int i=0;i<size;i++){
		
			
		temp=q.front();
		q.pop();
		if(i==0){
			cout<<temp->data<<" ";	
		}
		
		
		
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
			
			
			
			
		}

		
		
	}
	
}

int main(){
	
	
	
	
	
	
	node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    
    
 	leftView(root);
}
