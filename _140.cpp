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



node* Middle(node* head){
	
	
	if(head==NULL or head->next==NULL){
		
		return head;	
		
	}
	node* slow=head;
	node* fast=head;
	
	while(fast and fast->next){
		
		slow=slow->next;
		fast=fast->next->next;
		
		
	}
	
	return slow;
	
}

int main(){
	
	
	node* head=create(5);
	display(head);
	node* mid=Middle(head);
	
	if(mid){
		cout<<mid->data;
		
	}
	else{
		cout<<" EMPTY";
	}

	

	return 0;

}

