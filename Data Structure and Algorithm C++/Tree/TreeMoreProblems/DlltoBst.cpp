#include<iostream>
 
using namespace std;
 
class node{
    public:
    int data;
    node *left;
    node *right;

// parameterized constructor
    node(int value){
        this->data = value;
        this->left = this->right = NULL;
    }
};


node *craetedllnode(node *head){
  
    int n,value;
    cout<<"Enter how many nodes"<<endl;
    cin>>n;
    while(n--){
    cout<<"Enter the new node"<<endl;
    cin>>value;
    node *newnode = new node(value);
    node *ptr;
    if(head == NULL){
        head = ptr = newnode;
     }
    
    ptr->right = newnode;
    newnode->left = ptr;

    ptr = newnode;
    }
    return head;
    
}

//Find our middle node
node *middlenode(node *head){
    node *tmp = head;
    node *ptr = head->right;
    while(ptr->right != NULL){
        tmp = ptr;
        ptr = ptr->right;
    }
    return tmp;
}

//Conversion of DLL to BST
node *dlltobst(node *head){
    node *tmp,*prev,*forw;
    if(!head || !head->right)return head;
    tmp = middlenode(head);
    
    prev = tmp->left;
    forw = tmp->right;

    tmp->left = tmp->right = forw->left = NULL;

    if(prev != NULL) prev->right = NULL;

    tmp->left = dlltobst(prev);
    tmp->right = dlltobst(forw);
    
    

    return tmp;

}
void printlist(node *head){

    while(head->right!= NULL){
        cout<<head->data<<" ";
        head = head->right;
    }
}



void preorder(node *root){
    if(!root)return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{   
    node *head = NULL;
    head = craetedllnode(head);
    printlist(head);
    
    cout<<endl;
    cout<<middlenode(head)->data<<endl;
    //Creating BST

    // node *root = new node(20);
    // root->left = new node(12);
    // root->right = new node(25);
    // root->left->left = new node(6);
    // root->left->right = new node(15);
    // root->right->left = new node(22);
    // root->right->right = new node(30);
    node *root = dlltobst(head);
    preorder(root);



 return 0;
}