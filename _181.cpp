#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include<map>
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




node* createTree(int inorder[],int preorder[],int s_in,int e_in,int s_pre,int e_pre)
{
	
	if(s_in>e_in){
		
		return NULL;
	}
	
	node* root=newNode(preorder[s_pre]);
	
	int index_root=-1;
	for(int i=s_in;i<=e_in;i++){
		
		if(root->data==inorder[i]){
			
			index_root=i;
			break;
		}
		
	}
	
	int ls_in, le_in, ls_pre, le_pre;
	int rs_in, re_in, rs_pre, re_pre;
	
	ls_in=s_in;
	le_in=index_root-1;
	
	ls_pre=s_pre+1;
	le_pre=  le_in-ls_in + ls_pre;
	
	rs_in=index_root+1;
	re_in=e_in;
	
	rs_pre=le_pre+1;
	re_pre=e_pre;
	
	root->left=createTree( inorder, preorder, ls_in, le_in, ls_pre, le_pre);
	root->right=createTree( inorder, preorder, rs_in, re_in, rs_pre, re_pre);
	
	return root;
	
	
	
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
	
	
	int inorder[]={1,5,9,10,12,15,20};
	int preorder[]={10,5,1,9,15,12,20};
	
	
	node* ans=createTree( inorder,preorder,0,6,0,6);
	
	inorder_rec(ans);
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	

