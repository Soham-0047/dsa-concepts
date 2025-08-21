#include<bits/stdc++.h>
using namespace std;

int  main() {
    vector<int>v1;
    // O(1) time complexity for push_back and pop_back
    v1.push_back(23);
    v1.push_back(12); 
    v1.emplace_back(764);
    v1.pop_back();
    cout<<v1.size()<< " "<<v1.capacity()<<endl;

    for(int v : v1) {
        cout<<v<<" ";
    }

    cout<<"\n"<<v1.at(1)<<endl;
    cout<<v1.front()<<"\t"<<v1.back()<<endl;

    vector<int>v2(3,0);
                  // 0, 1, 2, 3, 4,  5, 6, 7
    vector<int>v3 = {84,22,40,12,44,78,54,90};
    v3.erase(v3.begin() + 2,v3.begin() + 4); //deleted 40 and 12, capacity will  be the same,...
    v3.insert(v3.begin() + 2, 234);

    for(int i:v3){
        cout<<i<<" ";
    }
    v3.clear(); //don't change the capacity, just clear the elements

    cout<<"\n"<<v3.empty()<<endl;

    vector<int>v4 = {83,23,44,21,78,33,90};
    vector<int>::iterator
    return 0;
}