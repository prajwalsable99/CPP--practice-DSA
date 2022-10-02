#include <bits/stdc++.h>
#include <queue>
using namespace std;


struct node{
	
	int data;
	node* left;
	node* right;
};

void levelorder( node* root){
	
	if (root==NULL){
		return ;	
	}	
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		
		node* temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
	
		if(temp->left!=NULL){
			
			q.push(temp->left);
			
			
		}
		if(temp->right!=NULL){
			q.push(temp->right);
			
		}
		
	}	 

		
	
	
	
}


node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 

int main()
{
    // Let us create binary tree shown in above diagram
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
   levelorder(root);
    return 0;
}
