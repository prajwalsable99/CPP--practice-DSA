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

void postorder_rec(node* root){
	
	if(root==NULL){
		return;
	}
	
	postorder_rec(root->left);
	postorder_rec(root->right);
	cout<< root->data<<" ";
}

void postorder_itr(node* root){
	

    if (root ==NULL) {
        return;
    }
 
    
    stack<node*> s;
    s.push(root);
 
    stack<int> out;
 
    
    while (!s.empty())
    {
        
        node* curr = s.top();
        s.pop();
 
        out.push(curr->data);
 
        
        if (curr->left) {
            s.push(curr->left);
        }
 
        if (curr->right) {
            s.push(curr->right);
        }
    }
 
    
    while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
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
    
    
    
 	postorder_rec(root);
 	cout<<endl;
 	postorder_itr(root);
 
  
    return 0;
}
