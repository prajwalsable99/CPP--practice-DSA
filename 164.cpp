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
 

int height(node* root ){
	
	
	if(root==NULL){
		
		return 0;
	}
	
	int hl=height(root->left);
	int hr=height(root->right);
	
	return max(hl,hr)+ 1 ;
	
	
}

int main()
{
    // Let us create binary tree shown in above diagram
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
 
  
    return 0;
}
