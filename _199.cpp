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


int minValue(node *root) {
    // your code here
    if(!root){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }
    return minValue(root->left);
    
}

int maxValue(node *root) {
    // your code here
    if(!root){
        return -1;
    }
    
    while(root->right!=NULL){
    	
    	root=root->right;
	}
	return root->data;
    
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
    cout<<endl;
    
  	cout<<maxValue(root);
  	
  	cout<<endl;
  	
	cout<<minValue(root);
    
    
    
    
    
 	
}



