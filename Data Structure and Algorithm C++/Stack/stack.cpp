#include<iostream>
using namespace std;

class stack{
    
    public:
     int top;
     int capacity;
     int *array;

};

stack *createstack(int cap){

    stack *s = new stack();
    if(!s)
        return NULL;
    s->capacity = cap;
    s->top = -1;
    s->array = new int(s->capacity); //in c we can use malloc to allocate meomry once more
    if(!s->array)
     return NULL;


return s;   
}

/*Note: Create a double stack. Incase if required we increase stack size with doubling it's capacity*/
void doublestack(stack *s){
    s->capacity *= 2;
    s->array = new int(s->capacity);
}
int isempty(stack *s){
    return (s->top==-1);
}

int isfull(stack *s){
    return s->top == s->capacity-1;
}

int size(stack *s){

    return s->top+1;
}

void push(stack *s,int data){
 if(isfull(s))
        doublestack(s);

    s->array[++s->top] = data; //first increment the top +1 and placed the data

}
//FILO
int pop(stack *s){

    if(isempty(s))
        cout<<"stack underflow"<<endl;

   return s->array[s->top--];
}

int peek(stack *s){
    if(isempty(s))
       return INT_MIN;
    
    return s->array[s->top];
}
void printstack(stack *s){
   // int n = sizeof(s->array)/sizeof(s->array[0]);
   cout<<"Last in First OUT"<<endl;
    for(int i=0;i<=s->top;i++){
        cout<<"|"<<s->array[i]<<"|"<<"\n____\n";
    }
    cout<<endl;

}

int main(){
 int i=0,capacity =4;
 stack *s = createstack(capacity);
 for(int i=0;i<capacity;i++){
     int j;
     cout<<"Enter the %d element"<<i+1<<endl;
     cin>>j;
     push(s,j);
 }
 printstack(s);
 cout<<"Popped Element is "<<pop(s)<<endl;
 printstack(s);



return 0;
}