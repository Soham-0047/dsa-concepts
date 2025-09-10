
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

    vector<char>v3 = {'a','b','c','d','e'};
    vector<char>::iterator it3;
    for(it3 = v3.begin(); it3 != v3.end(); it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;
    // We can also use auto
    for(auto it = v3.rbegin(); it != v3.rend(); it++){
        cout<<*it<<" ";
    }

    


return 0;
}