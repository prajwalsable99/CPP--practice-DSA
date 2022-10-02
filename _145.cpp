struct Node* reverseDLL(struct Node * head)
{
    
     if(head==NULL||head->next==NULL) 
        return head;
        
    struct  Node * curr=head;
    struct Node * newHead=NULL;
    while(curr!=NULL)
    {
        newHead=curr->prev;
        curr->prev=curr->next;
        curr->next=newHead;
        curr=curr->prev;
    }
    return newHead->prev;
    
}

