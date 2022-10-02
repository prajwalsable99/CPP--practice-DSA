#include<iostream>

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



int detectLoop(node* head){
	
	
	node* slow;
	node* fast;
	slow=head;
	fast=head;
	

 
    while (slow and fast and fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow== fast) {
            return 1;
        }
    }
    return 0;
}


int main(){
	
//	node* head=create(5);
	
	//loop
	node* head2=new node;
	head2->data=11;
	
	node* x=new node;
	x->data=22;
	
	node* y=new node;
	y->data=33;
	
	node* z=new node;
	z->data=44;
	
	head2->next=x;
	x->next=y;
	y->next=z;
	z->next=y;
	
	
//	display(head);
	
//	print_reverse(head);
//	head=reverse(head);

	cout<<detectLoop(head2);

	
	
	return 0;
	
	
	
	
}
