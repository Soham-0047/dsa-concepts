#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

class queue{
    public:
    node *front;
    node *rear;
};

queue *createqueue(){
    queue *q = new queue(); //default constructor
    if(!q)
        return NULL;
    
    node *linknode = new node();
    q->front = q->rear = NULL;

    return q;
}

//return the size fo the queue
int size(queue *q){

        node *ln = new node();
        ln = q->front;
        int count =0;
        if(q->front==NULL && q->rear==NULL)
            return count;
        while(ln != q->rear){
            count++;
            ln = ln->next;
        }
        if(ln==q->rear){
            count++;
        }

        return count;
}

void isempty(queue *q){
    if(q->front ==NULL && q->rear==NULL){
        cout<<"empty";
    }
    else{
        cout<<"not empty";
    }
}

void enqueue(queue *q,int value){
    node *ln = new node();
    ln->data = value;
    ln->next = NULL;
    if(q->rear==NULL){
        q->rear =q->front = ln;
    }
    else{
        q->rear->next = ln;
        q->rear = ln;
    }
}


void dequeue(queue *q){
    node *ln = new node();
    if(q->front==NULL){
        cout<<"no queue created yet";
    }
    ln = q->front;
    q->front = q->front->next;
    if(q->front ==NULL){
        q->rear = NULL;
    }
    free(ln);

}

void printqueue(queue *q){
    node *tmp = q->front;
    if(q->front==NULL && q->rear==NULL){
        cout<<"Queue is empty"<<endl;
    }
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

}

int main(){
     queue *q = createqueue();
    enqueue(q,12);
     enqueue(q,92);
     enqueue(q,120);
     enqueue(q,162);
     printqueue(q);
     dequeue(q);
     printqueue(q);



return 0;
}