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



int isCircular(node* head){
	
	
	if(head==NULL ){
		
		return 1;	
		
	}
	node* temp=head;
	
	
	while(temp){
		
		if(temp->next==head){
			return 1;
		}
		temp=temp->next;
		
		
	}
	
	return 0;
	
}

int main(){
	
	
	node* head=create(5);
	display(head);
	cout<<isCircular(head);
	
	
	node* x=new node;
	
	x->data=9;
	
	
	node* z=new node;
	
	z->data=1;
	
	x->next=z;
	z->next=x;
	cout<<endl;
	cout<<isCircular(x);
	
	

	

	return 0;

}

