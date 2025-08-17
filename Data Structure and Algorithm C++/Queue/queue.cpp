#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

//make a queue

class queue
{
public:
    int front,rear;
    int capacity;
    int size;
    int *arr;
};

//Empty queue

queue *createqueue(int capa)
{
    queue *q = new queue();
    if(!q)
        return NULL;
    q->capacity = capa;
    q->front = q->rear = -1;
    q->size =0;
    q->arr = new int(q->capacity); //int(size)
    if(!q->arr)
    {
        return NULL;
    }
    return q;
}

int size(queue *q)
{
    return q->size;
}
int isempty(queue *q)
{
    return (q->size ==0);
}

int isFull(queue *q)
{
    return (q->size == q->capacity);
}
//resize the queue
// maximum size of the queue must be defined prior.So if we try to enqueue one more element it's throw an error.
//So here we use dynamic circular array representation using resizequeue function

void resizeQueue(queue *q){
    int size = q->capacity;
    q->capacity *=2;
    q->arr = (int*)realloc(q->arr,sizeof(int)*q->capacity);
    if(q->front>q->rear){
        for(int i=0;i<q->front;i++){
            q->arr[i+size] = q->arr[i];
        }
        q->rear = q->rear+size;
    }
}




void enqueue(queue *q,int value)
{
    if(isFull(q))
        resizeQueue(q);

    q->rear = (q->rear+1)%q->capacity;
    q->arr[q->rear] = value;
    if(q->front == -1)
        q->front = q->rear;

    q->size +=1;
}

int dequeue(queue *q)
{
    int data  = INT_MIN;
    if(isempty(q))
    {
        cout<<"queue is empty"<<endl;
        return data;
    }
    data = q->arr[q->front];
    if(q->rear == q->front)
    {
        q->rear = q->front =-1;
        q->size =0;
    }
    else
    {
        q->front = (q->front+1)%q->capacity;
        q->size -= 1;
    }
    return data;
}

void printqueue(queue *q)
{
    for(int i=q->front; i<=q->rear; i++)
    {
        cout<<q->arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{

    queue *q = createqueue(6);

    enqueue(q,12);
    enqueue(q,78);
    enqueue(q,412);
    enqueue(q,780);
    enqueue(q,78);
    enqueue(q,412);

    printqueue(q);
    dequeue(q);
    printqueue(q);



    return 0;
}
