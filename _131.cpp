#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *create(int n)
{

	node* head,*p;
	head= new node;
	cout<<"Enter data of head ";
	cin>>head->data;
	head->next=NULL;
	p=head;
	for(int i=1;i<n;i++){
		p->next=new node;
		p=p->next;
		cout<<"ENTER "<<i<<"TH nodess data";
		cin>>p->data;	
		p->next=NULL;
	}
	return head;
}

void display(node *head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<"[ "<<temp->data<<" ]<-->";
		temp=temp->next;
	}cout<<"NULL";
cout<<endl;	
}


node*  remove_duplicates_unsorted(node *head){
	
	if(head==NULL || head->next==NULL){
		return head;
	}
	
	unordered_set<int>myset;
	
	node* temp=head;
	
	node* rem;
	myset.insert(temp->data);
	
	while(temp->next!=NULL){
		
		if(myset.find(temp->next->data) == myset.end()){
			
			
			myset.insert(temp->next->data);
			temp=temp->next;
		}
		else{
			rem=temp->next;
			temp->next=temp->next->next;
			free(rem);
		}
		
	}
	
	return head;
	
}

int main(){
	
	
	node* head=create(5);
	display(head);
	head=remove_duplicates_unsorted(head);
	display(head);
	return 0;
	return 0;
}


