#include<iostream>
 
using namespace std;
 
class node{
    public:
    int data;
    node *next;
    node(){
        next = NULL;
        data = 0;
    }
};

class bst{
    public:
    int data;
    bst *left;
    bst *right;
    bst(){
        left = right = NULL;
        data =0;
    }
};

bst *newnode(int value){
    bst *nd = new bst();
    nd->data = value;
    nd->left = NULL;
    nd->right = NULL;
    return nd;
}

node *push(node *head,int value){
    node *newn = new node();
    newn->data = value;
    newn->next = NULL;
    node *ptr;
    newn->next = NULL;
    if(head == NULL) head =ptr = newn;

    else{
        ptr->next = newn;
        ptr = newn;
    }

    return head;   
}
void printlist(node *head){
  
    node *ptr = head;
    while(ptr !=NULL){
      
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;
    }
    cout<<"NULL";

   
}

bst *listtobst(node **head,int n){

    if(n<=0)return NULL;
    // int mid = start + (end-start)/2;
    
    bst *lchild = listtobst(head,n/2);
    bst *par = newnode((*head)->data);
    
    par->left = lchild;
    *head = (*head)->next;
    par->right = listtobst(head,n-n/2-1);


    return par;
   

}

bst *listtobst2(node **head,int start,int end){
    if(start>end)return NULL;

    int mid = start + (end-start)/2;
    
    bst *lchild = listtobst2(head,start,mid-1);
    bst *par = newnode((*head)->data);
    
    par->left = lchild;
    *head = (*head)->next;
    par->right = listtobst2(head,mid+1,end);


    return par;

}
bst *listtobstutil(node *head){

    return listtobst(&head,5);
}

void preorder(bst *root){

    if(root == NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(bst *root){

    if(root == NULL)return;
   
    inorder(root->left);
     cout<<root->data<<" ";
    inorder(root->right);

}
int main()
{
    node *head = NULL;
    head = push(head,12);
    head = push(head,15);
    head = push(head,20);
    head = push(head,25);
    head = push(head,30);
    printlist(head);

    cout<<endl;

    bst *root= listtobstutil(head);
    preorder(root);

    cout<<endl;
    inorder(root);
    cout<<endl;

    bst *root1 = listtobst2(&head,0,4);
    preorder(root1);
    cout<<endl;
    inorder(root1);

 return 0;
}