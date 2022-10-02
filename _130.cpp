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


node*  remove_duplicates(node *head){
	
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* temp=head;
	node *rem;
	
	
	while(temp->next!=NULL){
		
		if(temp->data==temp->next->data){
			
			rem=temp->next;
			temp->next=rem->next;
			
			free(rem);
			
		}
		else{
			temp=temp->next;
		}
	}
	
	return head;
	
}

int main(){
	
	node* head=create(5);
	display(head);
	head=remove_duplicates(head);
	display(head);
	return 0;
}
