
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
int height(node *root)
{
    if(root==NULL){
        return 0;
    }
    else{
        return 1+max(height(root->left),height(root->right));
    }
}
void print(node *root,int level){
    if(root==NULL){
        return;
    }
    else if(level==0){
        cout<<root->data<<" ";
    }
    else{
        print(root->left,level-1);
        print(root->right,level-1);
    }
}
void LevelOrder(node * root)
{
  int h=height(root);
  for(int i=0;i<=h;i++){
      print(root,i);
  }  
}

