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



node* findIntersection(node* head1, node* head2){
    // Your Code Here
    if(head1==NULL || head2==NULL){
    	return NULL;
	}
	
	node* head3=NULL;
	node* curr=NULL;
    node* h1=head1;
    node* h2=head2;
    
    while( h1  and h2){
    	
    	
    	if(h1->data==h2->data){
    	
	    	if(head3==NULL){
	    		
	    		node* temp=new node;
	    		temp->data=h1->data;
	    		
	    		head3=temp;
	    		curr=temp;
	    		
			}
			else{
				node* temp=new node;
	    		temp->data=h1->data;
	    		
	    		curr->next=temp;
	    		curr=curr->next;
			
			
			}
    	h1=h1->next;
    	h2=h2->next;
    	
		}
		else if(h1->data<h2->data){
			
			h1=h1->next;
		}
		else{
			
			h2=h2->next;
			
		}
    		
	}
	
	return head3;
      
}


int main(){
	
	
	
	node* h1=create(3);
	node* h2=create(5);
	
	display(findIntersection(h1,h2));
}



