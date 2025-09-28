
#include<bits/stdc++.h>
using namespace std;


int main(){

    // vector<int>v1(5,0);
    // for(int i : v1){
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    // cout<<*v1.begin()<<endl;

    // vector<int>v2 = {1,2,3,4,5,6,7,8,9};
    // vector<int>::iterator it;
    // for(it = v2.begin(); it != v2.end(); it++){
    //     cout<<*it<<" "; //derefrence to get the value in that address
    // }
    // cout<<endl;
    // for(auto it1  = v2.rbegin(); it1 != v2.rend(); it1++){
    //     cout<<*it1<<" ";
    // }

    // vector<char>v3 = {'a','b','c','d','e'};
    // vector<char>::iterator it3;
    // for(it3 = v3.begin(); it3 != v3.end(); it3++){
    //     cout<<*it3<<" ";
    // }
    // cout<<endl;
    // We can also use auto
    // for(auto it = v3.rbegin(); it != v3.rend(); it++){
    //     cout<<*it<<" ";
    // }

    // basic list implementation

    //list basically here w are using doubly linked list that means we can insert the data from front as well as from back

    // list<int>li;
    // li.push_front(23);
    // li.push_front(90);
    // li.push_back(100);
    // li.push_back(110);
    // li.emplace_back(675);
    // li.emplace_front(233);

    // for(auto i : li){
    //     cout<<i<<" ";
    // }

    //* Deque (randomly we can access the items)

    // deque<int>li;
    // li.push_front(23);
    // li.push_front(90);
    // li.push_back(100);
    // li.push_back(110);
    // li.emplace_back(675);
    // li.emplace_front(233);

    // for(auto i : li){
    //     cout<<i<<" ";
    //     cout<<endl;
    //     cout<<li[2]<<endl;
    // }


    // Pair -part of utility library
    // pair<char,int> p = {'S',23};
    // cout<<p.first<<" "<<p.second<<endl;
    // pair<int, pair<string,char>> p1 = {1,{"Soham",'s'}};
    // cout<<p1.first<<" "<<p1.second.first<<endl;
    //* Pair using vector
    // vector<pair<int,int>>vp = {{2,3},{8,9},{4,5}};
    // for(pair<int,int> p : vp){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // * Stack (LIFO)
    // stack<int>s;

    // s.push(34);
    // s.push(45);

    // while(!s.empty()){
    //     cout<<s.top()<<" "<<s.size()<<endl;
    //     s.pop();
    // }

    // * Queue (FIFO)
      



return 0;
}