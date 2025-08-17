#include<iostream>
 
using namespace std;

class bst{
    public:
    int data;
    bst *left;
    bst *right; 
};


bst *findkthnode(bst *root,int k,int count){
    
    if(!root) return NULL;


    bst *left = findkthnode(root->left,k,count);
    if(left) return left;
    if(++count == k) return root;

    return findkthnode(root->right,k,count);
}

bst *insertnode(bst *root,int value){
   

    if(root==NULL){
    root = new bst(); 

    if(root==NULL){
        cout<<" ";
    }
    else{
        root->data = value;
        root->left = root->right = NULL;
    }
  

    }

    else{
        if(root->data<value) root->left = insertnode(root->left,value);

    else if(root->data>value)root->right = insertnode(root->right,value);
    }
    


    return root; 
}

void preorder(bst *root){
    if(!root)return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(bst *root){
    if(!root)return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{   
    bst *root =NULL;
    int arr[] = {2,4,3,5,6,8};
    for(int l:arr)
    root = insertnode(root,l);
   
    preorder(root);
    cout<<endl;
    inorder(root);

    cout<<endl;
    bst *kth;
    kth = findkthnode(root,2,0);
    cout<<kth->data<<" ";
 return 0;
}