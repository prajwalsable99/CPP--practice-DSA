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
 


struct faith{
	
	int ans;
	int h;
};

int height(node* root ){
	
	
	if(root==NULL){
		
		return 0;
	}
	
	int hl=height(root->left);
	int hr=height(root->right);
	
	return max(hl,hr)+ 1 ;
	
	
}

// time->n^2
int diameter(node* root){
	
	if(root==NULL){
		return 0;
	}
	int pd=height(root->left)+height(root->right)+1;
	
	int ld=diameter(root->left);
	int rd=diameter(root->right);
	
	
	
	
	int ans=max(pd,max(ld,rd));
	return ans;



}

int diameterOpt(struct node* root, int* height)
{
    // lh --> Height of left subtree
    // rh --> Height of right subtree
    int lh = 0, rh = 0;
  
    // ldiameter  --> diameter of left subtree
    // rdiameter  --> Diameter of right subtree
    int ldiameter = 0, rdiameter = 0;
  
    if (root == NULL) {
        *height = 0;
        return 0; // diameter is also 0
    }
  
    // Get the heights of left and right subtrees in lh and
    // rh And store the returned values in ldiameter and
    // ldiameter
    ldiameter = diameterOpt(root->left, &lh);
    rdiameter = diameterOpt(root->right, &rh);
  
    // Height of current node is max of heights of left and
    // right subtrees plus 1
    *height = max(lh, rh) + 1;
  
    return max(lh + rh + 1, max(ldiameter, rdiameter));
}


//faith diameter(node* root ){
//	
//	if(root==NULL){
//		
//		faith f;
//		f.ans=0;
//		f.h=0;
//		return f;
//	}
//	faith l=diameter(root->left);
//	faith r=diameter(root->right);
//	
//	int root_hei=l.h+r.h+1;
//	int x=  max(  root_hei,   max(l.ans,r.ans));
//	
//	faith final;
//	final.h=root_hei;
//	final.ans=x;
//	return final;
//	
//
//	
//	
//}



/*
int height(Node* root, int& ans)
{
    if (root == NULL)
        return 0;
 
    int left_height = height(root->left, ans);
 
    int right_height = height(root->right, ans);
 
    // update the answer, because diameter of a
    // tree is nothing but maximum value of
    // (left_height + right_height + 1) for each node
    ans = max(ans, 1 + left_height + right_height);
 
    return 1 + max(left_height, right_height);
}
 
//Computes the diameter of binary tree with given root.
int diameter(Node* root)
{
    if (root == NULL)
        return 0;
    int ans = INT_MIN; // This will store the final answer
    height(root, ans);
    return ans;
}

*/


int main()
{
    // Let us create binary tree shown in above diagram
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
//    root->left->left = newNode(4);
//    root->left->right = newNode(5);
// 	root->left->right->left= newNode(6);

 

   cout<<diameter(root)<<endl;
   
   int h=0;
   cout <<  diameterOpt(root, &h);
    return 0;
}
