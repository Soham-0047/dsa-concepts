//Main principle of bunary search tree is 
// root->left <root and root->right > root

//Now we create a bst class
#include<iostream>
 
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;

};

  class bst{

    public:
    int data;
    bst *left;
    bst *right;
     bst(int value){
         this->data = value;
         this->left = this->right = NULL;
     }

 };





node *head,*tail;

node* createdoubly(){
    head = NULL;
    cout<<"Enter how many nodes you want to create"<<endl;
    int n;
    cin>>n;
  
    while(n--){
    node* newnode = new node();
    newnode->next = NULL;
    newnode->prev = NULL;
        int value;
        cout<<"Enter the data of node"<<endl;
        cin>>value;
        newnode->data = value;
        if(head == NULL){
            head = tail = newnode;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;

    }
    return head;   
}



bst *insert(bst *root,int value){

    if(root==NULL){
        root = new bst(value);
    }
    else{
        if(value<root->data) root->left = insert(root->left,value);
        if(value>root->data) root->right = insert(root->right,value);
    }
    return root;
 }

bst* findmax1(bst *root){
     if(root==NULL) return 0;
     else if(root->right == NULL) return root;

     return findmax1(root->right);
 }

int findmax(bst *root){
     if(root==NULL) return 0;
     else if(root->right == NULL) return root->data;

     return findmax(root->right);
 }
int findmin(bst *root){
     if(root == NULL)return 0;

     else if(root->left == NULL) return root->data;

     return findmin(root->left);
 }

 bst *deletebst(bst *root,int value){
      bst *tmp;
      if(root ==NULL)cout<<"no tree";
      else if(value <root->data){
          root->left = deletebst(root->left,value);

      }
      else if(value>root->data){
          root->right = deletebst(root->right,value);
      }
      else{
          if(root->left && root->right){
             //replace with largest value in left subtree
             tmp = findmax1(root->left); //finding max in left
             root->data = tmp->data; // replace the data with tmp and target node
             root->left = deletebst(root->left,root->data);   //delete the empty node

              
          }
          //If one child is there
          else{
              
              if(root->right == NULL){
                  tmp = root->left;
                  free(root);
                  return tmp;
              } 
              if(root->left==NULL){
                  tmp = root->right;
                  free(root);
                  return tmp;
              } 

            
          }
      }
      return root;
 }
     
     
    //   23
    //  /  \
    // 12  25
    // / \
    // 11 24
 //Create a function that returns a given tree BST or not
     // This approach TC = O(n2) S.C = O(n)
 int isbst(bst *root){
     if(root == NULL) return 1;

    //if maximum element/node in left subtree  > root
     if(root->left != NULL && findmax(root->left) > root->data) return 0;
     if(root->right != NULL && findmin(root->right)<root->data) return 0;

     if(!isbst(root->left) || !isbst(root->right)) return 0;


     return 1;

 }

 // T.C = O(n)
 
//Here in this case we just visit for once each node

int isbstefficient(bst *root,int min,int max){

    if(!root)return 1;

    return (root->data>min && root->data<max && isbstefficient(root->left,min,root->data)&& isbstefficient(root->right,root->data,max));
}




//Convert binary search tree into doubly linked list

void convertdoublylinkedlist(bst *node){

bst *prev = NULL;
bst *head = NULL;

if(node==NULL) return;

convertdoublylinkedlist(node->left);

if(prev==NULL){
    prev = node;
    head = node;
}
else{
    prev->left = node;
    node->right = prev;
    prev = node;
}

convertdoublylinkedlist(node->right);
    

}


//Traverse the doubly linked list
void trlist(node *head){
    node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
}




void printlist(bst *root){
    bst *ptr;
    ptr = root;
    while(ptr->right != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->right;
    }
}


 void preorder(bst *root){
     if(root==NULL)return;
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
 }


  void inorder(bst *root){
     if(root==NULL)return;
     
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
 }







int main()
{
    bst *root =NULL;
    root = insert(root,12);
    insert(root,9);
    insert(root,23);
    insert(root,29);
    insert(root,5);
    insert(root,35);
    preorder(root);
    cout<<endl;
    // root = deletebst(root,5);
    // preorder(root);
    // cout<<endl<<isbst(root)<<endl;
    // cout<<isbstefficient(root,INT_MIN,INT_MAX)<<endl;
    // convertdoublylinkedlist(root);
    // printlist(root);

    node *head = NULL;
       head = createdoubly();
       trlist(head);


    
 return 0;
}

