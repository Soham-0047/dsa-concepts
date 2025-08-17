#include<iostream>
using namespace std;
//circular linked list implementation
class node{
 public:
    int data;
    node *next;
};

node *head,*tail;

node* createlinkedlist(){
    head ==NULL;
    int i;
    cout<<"Enter how many nodes you want to insert"<<endl;
    cin>>i;
    while(i--){
        int value;
        node *newnode = new node();
        cout<<"Enter the data of the node"<<endl;
        cin>>value;
        newnode->data = value;
        newnode->next = head;
        if(head==NULL){
            head=tail= newnode;
        }
        tail->next = newnode;
        newnode->next = head;
        tail = newnode;
        
    }
    return head;
}  

//insert at begin

node* insertatbegin(){
    int value;
    cout<<"Enter the node value"<<endl;
    cin>>value;
    node *newnode = new node();
    newnode->data = value;
    if(head==NULL){
        head = newnode;
    }
    newnode->next = head;
    tail->next = newnode;
    head = newnode;

    return head;
}

void insertatend(){
    int value;
    cout<<"Enter the node value"<<endl;
    cin>>value;
    node *newnode = new node();
    newnode->data = value;
    if(head==NULL){
        head = newnode;
    }
    else{
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

//Deletion start
/*
void deletionatfirst(){
    node *ptr = head;
    if(head==NULL){
        cout<<"no node"<<endl;
    }
    tail->next = ptr->next;
    head = ptr->next;
    free(ptr);
}
*/

void printlist(node *head){
    node *ptr = head;
    if(ptr==NULL){
        return;
    }
    do{
        cout<<ptr->data<<" ";
        tail = ptr;
        ptr=ptr->next;
    }while(ptr != head);
    cout<<"\ntail->next->data= "<<tail->next->data<<endl;

}
int main(){
        node *head = NULL;
        head =createlinkedlist();
        printlist(head);
        /*head =insertatbegin();
        printlist(head);
        insertatend();
        printlist(head);
        deletionatfirst();
        printlist(head);
        */


return 0;
}