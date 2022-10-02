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



node* reverseK(node* head,int k) {
		node* previous = NULL;
		node* current = head;
		node* next;
		int ct=0;
		while (current != NULL and ct<k) {
			next = current->next;
			current->next = previous;
			previous = current;
			current = next;
			ct++;
		}
		
		if(current!=NULL){
			head->next=reverseK(next, k);
		}
		
		
		
		return previous;
	}
	
	
	node* insertInMiddle(node* head, int x)
{
	// Cpde here
	     node *slow = head, *fast = head;
  
  while(fast != NULL && fast->next != NULL)
  {
      fast = fast->next->next;
     
      slow = slow->next;
  }
  
  node* temp=new node();
  temp->data=x;
    cout<<"slow: "<<slow->data;
  cout<<" fast "<<fast->data<<endl;;
  node* help=slow->next;
  temp->next=help;
  slow->next =temp;
  
  
  
  
  
  return head;
}
int main(){
	
	node* head=create(6);
	
	display(head);
	
//	print_reverse(head);
//	head=reverse(head);

	head=insertInMiddle(head, 146);

	display(head);
	
	return 0;
	
	
	
	
}
