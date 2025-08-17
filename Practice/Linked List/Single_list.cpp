#include<iostream>
 
using namespace std;

struct node{
    int data;
    node *next;

    node(int v){
        data = v;
        next = NULL;
    }

};


void print(node *head){

    node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{

    node *head = new node(20);

    node *f = new node(11);

    node *s = new node(90);

    head->next = f;
    f->next = s;

    print(head);

    
    return 0;
 
 
 return 0;
}