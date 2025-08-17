#include<iostream>
 
using namespace std;

class node{

    public:
    int data;
    node *next;
};

//Create a function build the linked list using user input accordingly

node* createlinkedlist(node *head){
    
    
    int n,n1,n2,i=0;
    cout<<"Enter the number of the nodes you want to insert"<<endl;
    cin>>n;

    node *ptr;
    

    if(head == NULL){
        cout<<"Enter the "<<i+1<<" node data"<<endl;
        cin>>n1;
        node *tmp = new node();
        tmp->data = n1;
        tmp->next = NULL;
        i++;
        head =ptr = tmp;
    }

        for(int j=i;j<n;j++){
        
        cout<<"Enter the "<<i+1<<" node data"<<endl;
        cin>>n2;
        node *tmp1 = new node();
        tmp1->data = n2;
        ptr->next = tmp1;
        tmp1->next = NULL;
        ptr = tmp1;
        i++;
        }
    
    return head;
}

void printlist(node *head){

cout<<"\t List is \t"<<endl;
    node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
   
    cout<<endl;
}
int main()
{
    node *head = NULL;
    head = createlinkedlist(head);
    printlist(head);
   

 
 
 return 0;
}