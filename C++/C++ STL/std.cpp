 #include<bits/stdc++.h>

using namespace std;


int main(){
    ///here we declare a pair with two different data types

pair<int,char>pt;
pt = make_pair(1,'e');

cout<<pt.first << " "<<pt.second<<endl;

set<int>s;
vector<int>arr;
arr.push_back(12);
arr.push_back(11);
arr.push_back(4);
arr.push_back(7);
arr.push_back(34);
for(int it:arr){
    cout<<it<<" ";
}
cout<<endl;
vector<int>::iterator it;
for(it = arr.begin();it != arr.end();it++){
    cout<<*it<<" ";
}
for(int i=0;i<arr.size();i++){
    s.insert(arr[i]);
}

}