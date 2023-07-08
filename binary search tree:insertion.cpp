/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

node * insert(node * root, int value)
{
    node * newNode = new node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    if(root == NULL){
       root = newNode;
       return root;
    }
    else if(root->data < value ){
        root->right = insert(root->right , value);
    } 
    else root->left = insert(root->left , value);
    return root;
}

