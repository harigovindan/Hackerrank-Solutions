/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

node * new_node;
int flag=0;
void functions(node * root){
    if(root == NULL)  return;
    cout << root->data <<" ";
    functions(root->right);
}
void top_view(node * root)
{   
    if(flag==0){
        new_node = root;
        flag++;
    }
    if(root == NULL)  return;
    top_view(root->left);
    cout << root->data << " ";
    if(root == new_node){
        functions(root->right);
        return ;
    }
}

