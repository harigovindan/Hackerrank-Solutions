/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  struct Node *prev=head,*curr=head;
    int c=positionFromTail;
    while(c--){
        curr=curr->next;
    }
    while(curr->next!=NULL){
        prev=prev->next;
        curr=curr->next;
    }
    return (prev->data);
}

