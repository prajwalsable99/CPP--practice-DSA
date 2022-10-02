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







void detectAndRemoveLoop(node* head)
{
	
	if (head == NULL || head->next == NULL)
		return;

	node* slow = head;
	node* fast = head;


	slow = slow->next;
	fast = fast->next->next;

	// Search for loop using slow and
	// fast pointers
	while (fast && fast->next) {
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}

	
	if (slow == fast)
	{
		
		cout<< " LOOP DETCTED"<<endl;
		slow = head;
		
	
		if(slow == fast) {
			while(fast->next != slow) fast = fast->next;
		}
		else {
			while (slow->next != fast->next) {
				slow = slow->next;
				fast = fast->next;
			}
		}

		fast->next = NULL; 
		cout<< " LOOP DElETED"<<endl;
	}
	
	else{
		cout<< " LOOP  NOT DETCTED"<<endl;
	}
}


int main()
{
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

	detectAndRemoveLoop(head2);

	
//	display(head2);

	return 0;
}

