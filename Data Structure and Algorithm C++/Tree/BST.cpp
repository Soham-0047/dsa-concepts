#include<iostream>
 
using namespace std;

class binarynode
{

public:
    int data;
    binarynode *left;
    binarynode *right;
    
    
};


binarynode *insert(binarynode *root,int value){
    if(root==NULL){
        root = new binarynode();
        if(root==NULL){
            cout<<"memory error";
        }
        else{
            root->data = value;
            root->left = root->right = NULL;
        }
    }
    //In this case root already present
    //So we are going to insert elements
    else{
        if(value<root->data){
            root->left = insert(root->left,value);
        }
        else if(value>root->data){
            root->right = insert(root->right,value);
        }

    }
    return root;
}

void inorder(binarynode *root){
    if(!root){
        return;
    }
     
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(binarynode *root){
    if(root !=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
}
void postorder(binarynode *root){
   if(root !=NULL){
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    } 
}

int main()
{
    binarynode *root = NULL; //mention root == NULL otherwise it's nothing alocate initially
    root=insert(root,23);
    insert(root,12);
    insert(root,67);
    insert(root,11);
    insert(root,55);
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);

    
 return 0;
}