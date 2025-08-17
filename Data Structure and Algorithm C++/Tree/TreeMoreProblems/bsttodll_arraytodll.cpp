#include<bits/stdc++.h>

using namespace std;
 
class node{
    public:

int data;
node *left;
node *right;

 
  node(int data){
    this->data = data;
    this->left = this->right = NULL;
}
};

//**head act as a pointer to pointer

void bsttodll(node *root,node **head){
   
    if(root == NULL)return;

//Mention static as to access it through all recursion calls
     static node *prev = NULL;

//We have to traverse recursively in left sub tree
    bsttodll(root->left,head);
//When it'll reach the lestmost node and if prev  == null then set head as root and prev = root
//After this recursion it'll back to the previous recursion step and check prev, and set 
    if(prev ==  NULL) *head = root;
    //Here root->left store the prev and prev->right will store the root address

    else{
        root->left = prev;
        prev->right = root; 
    }
    prev = root;

 bsttodll(root->right,head);


}

node *arrtobst(int *p,int left,int right){

    if(left>right)return NULL;


    int mid;
    if(left == right){

    node *newnode = new node(p[left]);
    newnode->left = newnode->right = NULL;
    }

    mid = left + (right - left)/2;
    node *newnode = new node(p[mid]);
    newnode->left = arrtobst(p,left,mid-1);
    newnode->right = arrtobst(p,mid+1,right);


return newnode;

}

void preorder(node *root){
    if(root==NULL)return;
    
    
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}

void inorder(node *root){
    if(root==NULL)return;
    
    
    
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}

void printdll(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->right;
    }
    
}

int main()
{
    node *root = new node(22);
    root->left = new node(7); 
     root->right = new node(28);
    root->left->left = new node(4);
    root->left->right = new node(9);
  
    root->right->left = new node(26);
    root->right->right = new node(29);
    preorder(root);
    cout<<endl;
    node *head = NULL;
    bsttodll(root,&head); //give address of dll node as head
    printdll(head);
    
    cout<<endl;
    int arr[] = {1,2,8,10,10,12,19};

    node *root1 = arrtobst(arr,0,6);
    preorder(root1);
    cout<<"\nInorder Traversal"<<endl;
    inorder(root1);
   

 
 return 0;
}
