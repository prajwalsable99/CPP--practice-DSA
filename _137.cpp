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

int getCount(node* head){
	
	int c=0;
	node* temp=head;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
}

int intersectionPt(node* head1,node* head2){
	
	int c1=getCount(head1);
	int c2=getCount(head2);
	int diff;

	node* current1;
	node* current2;

	if(c1>c2){
		
	 current1 = head1;
     current2 = head2;
    	diff=c1-c2;
		
	}
	else{
	 current2 = head1;
     current1 = head2;
		diff=c2-c1;
	}
	
	for(int i = 0; i < diff; i++) {
        if (current1 == NULL) {
            return -1;
        }
        current1 = current1->next;
    }
 
   
    while (current1 != NULL && current2 != NULL) {
    	
        if (current1 == current2){
        	return current1->data;
		}
            
 
       
        current1 = current1->next;
        current2 = current2->next;
    }
 
    return -1;
		
	
	
	
}


int main(){
	
	

	node* a=new node;
	node* b=new node;
	node* c=new node;
	node* d=new node;
	node* e=new node;

	a->data=1;
	b->data=2;
	c->data=3;
	a->next=b;
	b->next=c;
	
	node* a1=new node;
	node* b1=new node;
	
	a1->data=11;
	b1->data=22;

	a1->next=b1;
	b1->next=c;
	
	d->data=77;
	e->data=88;
	
	
	c->next=d;
	d->next=e;
	e->next=NULL;


	

	cout<<intersectionPt(a,a1);
	
	
	

}

