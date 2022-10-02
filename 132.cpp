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


node*  last_to_first(node *head){
	
	if(head==NULL || head->next==NULL){
		return head;
	}
	
	
	
	node* temp=head;
	

	
	while(temp->next->next!=NULL){
		
		temp=temp->next;
		
	}
	node* newhead=temp->next;
	
	temp->next=NULL;
	
	newhead->next=head;
	return newhead;
	
}

int main(){
	
	
	node* head=create(2);
	display(head);
	head=last_to_first(head);
	display(head);
	

	return 0;

}


