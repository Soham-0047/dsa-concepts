#include<iostream>
using namespace std;
//Node class to represent node of linked list
class Node{
    public:
    int data;
    Node *next;

    //default constructor
    Node(){
        data =0 ;
        next = NULL;
    }
    //parameterised constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

//class to create linked list
class Linkedlist
{
    Node *head; //head node
    int value;
public:
 
     //default constructor
     Linkedlist(){
         head = NULL;
     }

      Node* insertatbeginnode();
      Node*createlinkedlist();
      void printlist();
      Node* insertatindex();
      Node* insertatend();
      Node* insertafternode(int);
      Node* insertbeforenode(int);

      //Deletion of elements

      void deleteatbegin();
      void deleteatend();
      Node* deleteatindex();
};


Node* Linkedlist::createlinkedlist(){
    cout<<"Enter number of nodes you want to create"<<endl;
    int n;
    cin>>n;
    Node *new1 = NULL;
    Node *new2 = NULL;
    while(n--){

        new1 = new Node();

        cout<<"Enter the data for nodes"<<endl;
        
        cin>>new1->data;
        new1->next = NULL;

        if(head ==NULL){
            head = new2 = new1;
        }
        else{
            new2->next = new1;
            new2 = new1;
        }
    }
    return head;
}

void Linkedlist::printlist(){
    Node *p = head;
    if(p == NULL){
        cout<<"Node not provided"<<endl;
    }
    else{
        while(p!=NULL){
            cout<<p->data<<"->";
            p = p->next;
        }
    }
    cout<<endl;
}

Node* Linkedlist::insertatbeginnode(){
    cout<<"\nEnter the value for insert at begining"<<endl;
    int value;
    cin>>value;
    Node *new1 = new Node(value);
    if(head == NULL){
        head = new1;
    }
    else{
        new1->next = head;
        head = new1;
    }
    return head;
}

Node*Linkedlist::insertatend(){
    Node* ptr = head;
    
    Node *new1 = new Node();
    cout<<"Enter the value to be inserted at end"<<endl;
    cin>>new1->data;
    if(head==NULL){
        cout<<"no head node"<<endl;
    }
    else{
        //stand ptr at last node
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        
        ptr->next = new1;
        new1->next = NULL;
    }
    
    return head;
}

Node* Linkedlist::insertafternode(int v1){
    Node* ptr = head;
    Node* newnode = new Node(value);
    cout<<"Enter the value to be inserted after the node"<<endl;
    cin>>newnode->data;
    if(head == NULL){
        head = newnode;
    }
    else{
        while(ptr->data !=v1){
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;

    }
    return head;
}

Node* Linkedlist::insertbeforenode(int v1){
    Node* ptr = head;
    Node* newnode = new Node(value);
    cout<<"Enter the value to be inserted after the node"<<endl;
    cin>>newnode->data;
    if(head == NULL){
        head = newnode;
    }
    else{
        while(ptr->next->data !=v1){
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;

    }
    return head;
}

Node* Linkedlist::insertatindex(){
    Node *ptr = head;
    cout<<"Enter the index where insert the node"<<endl;
    int index;
    cin>>index;
    int i=1;
    Node *newnode = new Node();
    cout<<"Enter the value for new node"<<endl;
    cin>>newnode->data;
    newnode->next =NULL;
    if(head == NULL){
        head = newnode;
    }
    while(i!=index-1){
        ptr = ptr->next;
        i++;
    }
    newnode->next = ptr->next;
    ptr->next = newnode;

    return head;
}

//Deletion starts from here

void Linkedlist::deleteatbegin(){
    if(head == NULL){
        cout<<"no nodes are there"<<endl;
    }
    else{
        head = head->next;
        
    }
}

void Linkedlist::deleteatend(){
    Node *pre;
    Node *ptr = head;
    while(ptr->next!= NULL){
        pre = ptr;
        ptr = ptr->next;
    }
    pre->next = NULL;
    free(ptr);
   
}

Node* Linkedlist::deleteatindex(){
    Node* prev;
    Node *ptr = head;
    cout<<"Enter the index where delete the node"<<endl;
    int index;
    cin>>index;
    int i=1;
    /*
    Node *newnode = new Node();
    cout<<"Enter the value for new node"<<endl;
    cin>>newnode->data;
    newnode->next =NULL;
    */
    if(head == NULL){
        cout<<"no node"<<endl;
    }
    while(i!=index-1){
        ptr = ptr->next;
        i++;
    }
    prev = ptr->next;
    ptr->next = prev->next;
    free(prev);

    return head;

}
int main(){
    Node *head =NULL;
    Linkedlist list;
    head = list.createlinkedlist();
    list.printlist();

    /*
    head = list.insertatbeginnode();
    list.printlist();
    
    head = list.insertatend();
    list.printlist();
    
    int v;
    cout<<"Enter the node after that you want to insert the node"<<endl;
    cin>>v;
    head= list.insertafternode(v);
    list.printlist();
    cout<<"Enter the node after that you want to insert the node"<<endl;
    cin>>v;
    head= list.insertbeforenode(v);
    list.printlist();
*/
   head = list.insertatindex();
   list.printlist();
   /*

  // Deletion begin
    list.deleteatbegin();
    list.deleteatend();
    list.printlist();
    head = list.deleteatindex();
    list.printlist();
    */



return 0;
}

