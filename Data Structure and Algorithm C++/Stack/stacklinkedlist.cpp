#include<iostream>
using namespace std;

//create node for stack

class node{
    public:
    int data;
    node *next;
};

//create stack

class stack{
    public:
    node *top;
};

stack *createstack(){
    stack *s = new stack();
    s->top = NULL;
    return s;

}

int isEmpty(stack *s){
    return s->top ==NULL;
}

void push(stack *s,int value){
   node *tmp;
   tmp = new node();
   if(!tmp){
       cout<<"stack overflow \n";
   }
    tmp->data = value;
    tmp->next = s->top;
    s->top = tmp;

}

int size(stack *s){
    int count =0;
    node *tmp;
    if(isEmpty(s))
            return 0;
    tmp = s->top;
    while(tmp){
        count++;
        tmp = tmp->next;

    }
    return count;
}


int pop(stack *s){
    int value;
    node *tmp;
    if(isEmpty(s))
        return INT_MIN;

    tmp = s->top;
    s->top = s->top->next; // just move s->top to s->top->next
    value = tmp->data; // store the popped element data

    return value; //return the popped element from the stack
}

int peek(stack *s){
    if(isEmpty(s))
    return INT_MIN;

    return s->top->data;
}

void printstack(stack *s){
    node *tmp;
    tmp = s->top;
   
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
}
int main(){

    stack *s = createstack();
    for(int i=0;i<=10;i++){
        push(s,i);
    }
    printstack(s);
    pop(s);
    pop(s);
    pop(s);
    cout<<endl;
    printstack(s);
    


return 0;
}