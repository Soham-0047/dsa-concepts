#include<iostream>
#include<vector>

using namespace std;

class node{

    public:
    int data;
    node *next;
};

//Create linked list 

//nsert the node at the end of the linked list

void print(node *head){

    node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
        
    }
    // if(tmp == NULL) cout<<"yea"<<endl;]
    cout<<endl;
}

node* insert(node *head,int value)
{
    node *ptr = head;

    node *new1 = new node();
    new1->data = value;
    if(head == NULL){
        new1 = head;
    }
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new1;
    new1 = ptr;

    return head;

}
//If I want to insert the node in the middle of the linked list

node* middle(node *head,int value,int index){

    node *new1 = new node();
    new1->data = value;
    if(head == NULL){
       head = new1;
    }
    int i =0;
    node *ptr = head;

    while(i != index-1){
        ptr = ptr->next;
        i++;
    }

    new1->next = ptr->next;
    ptr->next = new1;
    
    new1 =  ptr;

    return head;
}

//Insert at first index

void finsert(node *head,int value){

    node *new1 = new node();
    new1->data = value;

    if(head == NULL){
        head = new1;
    }
    new1->next = head;
    head = new1;

    print(head);
}
//now want to delete the noes but how we can do that

// 34|120 -> 56|456 -> 12|_ -> NULL
void deletemiddlenode(node *head,int pos){

    node *ptr = head;
    node *tmp;
    while(ptr->data != pos){
        tmp = ptr;
        ptr  =ptr->next;

    }
   tmp->next = ptr->next;
   delete[]ptr;
   print(head);
        

}

//delte the first node

void deletefirstnode(node *head){
    if(head == NULL){
        return;
    }
    node *ptr = head;
    head = head->next;
    delete[] ptr;

    print(head);
}

//Delete the  repeatative node 


void deletedup(node *head){

    node *ptr1,*ptr2,*ex;
    ptr1 = head;

    while(ptr1 != NULL && ptr1->next != NULL){

        ptr2 = ptr1;

        while(ptr2->next != NULL){
            if(ptr1->data == ptr2->next->data){
                ex = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(ex);
            }
            else{
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }

    print(head);
}

// If the list is already sorted then

// 5 5 11 12 13 13

void delsortnode(node *head){

    node *ptr1,*ptr2;
    ptr1 = head;
    //If head is null then return nothing
    if(head == NULL) return;

    while(ptr1->next != NULL ){

        if(ptr1->data == ptr2->next->data)
        {
        ptr2 = ptr1->next->next;

        free(ptr2->next);

        ptr2->next = ptr2;
        
        }

        else{
            ptr1 = ptr1->next;
        }
    }
    
    print(head);
}


// Just for print the double dimension array


int main()
{
    node *head = new node();
    node *first = new node();
    node *second = new node();

    head->data = 12;
    head->next = first;

    first->data = 24;
    first->next = second;

    second->data = 67;
    second->next = NULL;

    // print(head);

    head = insert(head,12);
    // print(head);

    head = middle(head,120,2);
    print(head);

    
    

    // finsert(head,9091); 
    // deletemiddlenode(head,67);
    // deletefirstnode(head);


    // deletedup(head);

 
 return 0;
}