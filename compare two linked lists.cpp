/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    struct Node *A=headA,*B=headB;
  while(A!=NULL && B!=NULL){
      if(A->data != B->data){
          return 0;
      }
      else{
          A=A->next;
          B=B->next;
      }
  }
    if(!A &&!B)
    {return 1;}
    else{
        return 0;
    }
}

