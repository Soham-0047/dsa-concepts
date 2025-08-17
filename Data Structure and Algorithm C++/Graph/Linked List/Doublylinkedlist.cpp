#include<iostream>
using namespace std;
//implement of doubly linked list
class node
{
    public:
    int data;
    node *prev;
    node *next;
 
};

//Declare two pointers globally to access all over the programme
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

void insertionatbegin(){

    //first declare a pointer assign head value
    int value;
    node *ptr = head;
    node* newnode = new node();
    newnode->prev = newnode->next = NULL;
    cout<<"Enter the data you want to insert at begin"<<endl;
    cin>>value;
    newnode->data = value;
    if(head == NULL){
        head = newnode;
    }
    

}

void insertatend(){
    cout<<"Enter the data of the node that enterm in the end"<<endl;
    int value;
    cin>>value;
    node* newnode = new node();
        newnode->data = value;

        if(head==NULL){
            head =tail = newnode;
        }
        else{
            newnode->prev = tail;
            tail->next = newnode;
            newnode->next = NULL;
            tail = newnode;
         }
}

void insertatgivenposition(){
    node *ptr = head;
    int i=1;
    int pos;
    cout<<"Enter the position where you want to insert the item"<<endl;
    cin>>pos;
    int value;
    cout<<"Enter the value you want to insert that position"<<endl;
    cin>>value;
    node* newnode = new node();
    newnode->data = value;
    if(head==NULL){
        head = tail = newnode;
    }
    else{
        while(i!=pos-1){
            ptr = ptr->next;
            i++;
        }

        ptr->next->prev = newnode;
        newnode->next = ptr->next;
        newnode->prev = ptr;
        ptr->next = newnode;

    }
}


//deletion of doubly linked list
node* deletionfirst(){
    if(head == NULL){
        cout<<"no node in there"<<endl;
    }
    else{
        head = head->next;
        head->prev = NULL;
    }
    return head;
}

//deletion at the end of the list

void deletionatend(){
    if(head==NULL){
        cout<<"no node"<<endl;
    }
    else{
        tail = tail->prev;
        tail->next = NULL;
    }
}

node* deletionatanypos(){
    node *ptr = head;
    int i=1;
    int pos;
    cout<<"Enter which position node want to delete"<<endl;
    cin>>pos;
    while(i!=pos){
        ptr =ptr->next;
        i++;
    }
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    
    return head;

}

void printlist(node *head){

    
    node *ptr = head;
    while(ptr != NULL){

        cout<<ptr->data<<" <-> ";
        tail = ptr;
        ptr = ptr->next;
    }
    cout<<"\n tail->"<<tail->data<<endl;
   
}


int main(){
    node *head = NULL;
    head = createdoubly();
    printlist(head);
   insertatend();
    printlist(head);
    
    insertatgivenposition();
    printlist(head);
    
   head =deletionfirst();
   
   deletionatend();
  
  head = deletionatanypos();
   printlist(head);
   


   
}