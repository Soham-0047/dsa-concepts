#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<deque>
#include<stack>
#include<queue>
#include<set>

using namespace std;

void pairexplain(){
    pair<int,int> pt ={4,6};
    cout<<"First element is "<<pt.first<<" and second element is "<<pt.second<<endl;

    pair<int,pair<int,int>> pt1 ={2,{7,8}};

   cout<<pt1.first<<endl;
   cout<<pt1.second.first<<endl;
   ///Accessing Array elemenyt
   pair<int,int> arr[]={{5,6},{99,8},{23,11}};
   cout<<arr[2].first<<endl;

}

void vectorexplain(){

    //Declare aa empty vector
    cout<<"vector starts from here"<<endl;
    vector<int>v; //{} empty vector
    v.push_back(23);
    v.emplace_back(34); //same as push_back function
    v.push_back(878);
    int i=0;
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }
    //declare pair within vector

    vector<pair<int,int>> v1;
    v1.push_back({4,5});
    v1.push_back({7,8});
    int i1=0;
    while(i1<v1.size()){
        cout<<v1[i1].first<<" ";
        cout<<v1[i1].second<<" ";
        i1++;
    }

    //vector declare with size 5 where every element x
    vector<int>v3(12,20);
    
    //vector size of 10 default initialized with 0 or take garbage value
    vector<int>v4(12);
    vector<int>v5(v4); //copy of v4
    cout<<endl;
    vector<int>::iterator it = v4.begin();

    for(it;it<v4.end();it++){
        cout<<*it<<" ";

    }
    cout<<endl;
    vector<int>v6;
    v6.push_back(23);
    v6.push_back(78);
    v6.push_back(10);
    v6.push_back(65);
    v6.push_back(12);
    v6.push_back(55);

    // vector<int>::iterator it1 = v6.begin();
    // for(it1;it1<v6.end();it1++){
    //     cout<<*it1<<" ";
    // }
    //return constant iterator that points first and last element 
    //auto coverts given data type 
   /* for(auto i=v6.cbegin();i!=v6.cend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v6.rbegin();i!=v6.rend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v6.crbegin();i!=v6.crend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;*/
    //Another way to print vector :)
    for(auto it:v6){
        cout<<it<<" ";
    }
    
    cout<<endl;
   v6.erase(v6.begin()+3); //erase the 3+1 position
   for(auto it:v6){
       cout<<it<<" ";
   }
   cout<<endl;
   v6.erase(v6.begin()+1,v6.begin()+3);
    for(auto it:v6){
       cout<<it<<" ";
   }

   //Insert function in vector

    vector<int>v7(3,67);
    cout<<"\n"<<v7[0]<<" "<<v7[1]<<" "<<v7[2]<<endl;

    v7.insert(v7.begin(),445); //insert at first
    v7.insert(v7.begin()+1,3,110); //insert at 2nd position 3 copy of 110

    //445 110 110 110 67 67 67
    vector<int>v8(3,1250);
    v7.insert(v7.end(),v8.begin(),v8.end());//insert 3 copy of 1250 vector at the end of v7
    //445 110 110 110 67 67 67 1250 1250 1250
    v7.pop_back();
    //445 110 110 110 67 67 67 1250 1250
    for(auto i1:v7){
        cout<<i1<<" ";
    }
 //swap
    vector<int>v9(1,23),v10(1,34);
    cout<<"\n"<<v9[0]<<" "<<v10[0]<<endl;
    v9.swap(v10);
    cout<<"\n"<<v9[0]<<" "<<v10[0]<<endl;
    
    cout<<v7.empty()<<endl;
    v7.clear(); //erases the entire vector
    cout<<v7.size()<<endl;


 /*   advance(it1,1); //function use for increment the iterator position till the specified number mentioned in argument

    cout<<"position of iterator "<<*it1<<endl;*/
//     vector<int>v7 = {45,67,12,34,90};
//     vector<int>::iterator it2 = v7.begin();
//    auto it3= prev(it2,34);

//     cout<<"position of iterator "<<*it3<<endl;

}

void listexplain(){
        //In the case of vector we can not push elements front in the array
        list<int>mylist;
        mylist.push_back(23);
        mylist.push_front(12); //element insert in front
        mylist.push_back(56);
        mylist.push_front(90);
        for(auto it:mylist){
            cout<<it<<" ";
        }
}

void dequeexplain(){
    deque<int>dq;
    dq.push_back(12);
    dq.push_front(56);
    dq.emplace_back(67);
    dq.emplace_front(77);
    cout<<dq.size()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;
    for(auto it:dq){
        cout<<it<<" ";
    }

}

void explainstack(){

    stack<int>st;
    for(int i=2;i<10;i+=2){
        st.push(i);
    }
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<"stacks elements are"<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}

void explainqueue(){
        queue<int>q;
         for(int i=2;i<10;i+=2){
        q.push(i);
    }
    cout<<"front element "<<q.front()<<endl;
    cout<<"size of the queue "<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

}

void explainpriorityqueue(){
    //It always returned sorted order element

    priority_queue<int>pq;
    pq.push(4);
    pq.push(12);
    pq.push(5);
    pq.push(90);
    cout<<pq.top()<<endl;

    //By default ascending order 
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<"decending order"<<endl;
     priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(4);
    pq1.push(12);
    pq1.push(5);
    pq1.push(90);
    while(!pq1.empty()){
        cout<<pq1.top()<<endl;
        pq1.pop();
    }

}

void explainset(){
    //rearrange in a sorted manner
  set<int>st;
  st.insert(23);
  st.insert(33);
  st.insert(11);
  st.insert(6);
  st.insert(20);
  st.insert(15);
  
  cout<<*st.find(11)<<endl;

  //6 11 15 20 23 33

  for(auto it:st){
      cout<<it<<" ";
  }
  auto it1 = st.find(20);
  auto it2 = st.find(33);

  st.erase(it1,it2); //6 11 15 33
  cout<<endl;
  for(auto it:st){
      cout<<it<<" ";
  }
  auto it3 = st.upper_bound(11);
  cout<<endl<<*it3<<endl;
  auto it4 = st.lower_bound(11);
  cout<<endl<<*it4<<endl;
    
}

void explainmultiset(){
    //As like sets all properties are same only it's store duplicate elements also

    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.emplace(34);
    ms.insert(34);
    ms.insert(12);
    ms.insert(22);
    ms.emplace(12);
    ms.insert(22); 

    
    int co = ms.count(2);
    cout<<co<<endl;

    //2 2 12 12 22 22 34 34 
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    ms.erase(2);
    //12 12 22 22 34 34
    for(auto it:ms){
        cout<<it<<" ";
    }
    //For single element delete
    ms.erase(ms.find(12));
}

void explainUset(){
    unordered_set<int>st;
    //In comparison to set it's not support lower bound and upper bound function rest is same as set.It does not store elements in a particular manner so it has better complexity compare to set(logn)
}


int main(){


    /*pairexplain();*/
    // vectorexplain();
    // listexplain();
    // dequeexplain();

    //  explainstack();
    // explainqueue();
    
    //explainpriorityqueue();
   // explainset();
   // explainmultiset();



return 0;
}