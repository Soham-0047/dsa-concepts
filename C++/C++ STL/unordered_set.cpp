#include<bits/stdc++.h>
using namespace std;



int main()
{
    unordered_set<int>i;

    unordered_set<string>s;

    i.insert(12);
    i.insert(22);

    for(auto it = i.begin();it != i.end();it++){

        cout<<*it<<" ";
    }
    
 
 
 return 0;
}