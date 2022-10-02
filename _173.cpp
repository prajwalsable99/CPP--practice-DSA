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

void topView(node* root){
	
	if(!root){
		return ;
	}
	
	
	map<int,int>m;
	queue<pair<node*, int> > q;

	
	node* temp=root;
	
	q.push({temp,0});
	
	while(!q.empty()){
		
		pair<node*, int>temp=q.front();
		node* n=temp.first;
		int x=temp.second;
		q.pop();
		
		
	
			m[x]=n->data;
		
		
		if(n->left!=NULL){
			
			
			q.push({n->left,x-1});
			
		}
		if(n->right!=NULL){
			
		
				q.push({n->right,x+1});
			
		}
		
	}
	
	for (auto i : m)
       cout<<i.second;
	
	
	
}
