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


void print_reverse(node * head){
	
	if(head==NULL){
		return;
	}
	print_reverse(head->next);
	cout<<" "<<head->data<<"--";
	
}

node* reverse(node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
 
        /* reverse the rest list and put
          the first element at the end */
        node* rest = reverse(head->next);
        head->next->next = head;
 
        head->next = NULL;
 
        
        return rest;
    }
node* reverse_iter(node* head) {
		node* previous = NULL;
		node* current = head;
		node* next;
		while (current != NULL) {
			next = current->next;
			current->next = previous;
			previous = current;
			current = next;
		}
		
		
		return previous;
	}

int main(){
	
	node* head=create(4);
	
	display(head);
	
//	print_reverse(head);
//	head=reverse(head);

	head=reverse_iter(head);

	display(head);
	
	return 0;
	
	
	
	
}
