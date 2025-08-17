#include<iostream>
#include<stack>
using namespace std;
//Reverse a queue 


int main(){

stack<int> st;
for(int i=2;i<12;i++){
    st.push(i);
}
cout<<"stack size"<<st.size()<<endl;
cout<<"stack top element"<<st.top()<<endl;
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}





return 0;
}