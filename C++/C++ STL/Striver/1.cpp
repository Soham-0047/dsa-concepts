#include<bits/stdc++.h>

using namespace std;

void funpair(){

    pair<int,int> s = {23,56};
    cout<<s.first<<" and "<<s.second<<endl;
    pair<int,int>p[] = {{34,56},{6,7}};
    cout<<p[1].first<<" "<<endl;

}

void vector_lib(){

    vector<int>v;  
    v.push_back(45);
    v.push_back(33);
    
    for(auto i:v){
        cout<<i<<" ";
    }
}
int main(){

    //funpair();
    vector_lib();

    return 0;
}