/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  if(head==NULL){
      return;
  }
    struct Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

