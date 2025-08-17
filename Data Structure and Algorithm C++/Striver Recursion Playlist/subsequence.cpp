#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void func(int i,vector<int>&p,vector<int>&st){
    if(i>=p.size()){
        for(auto it:st){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    st.push_back(p[i]);
    func(i+1,p,st);
    st.pop_back();
    func(i+1,p,st);

}
//print subsequence with given sum

void sub(int i,vector<int>&arr,vector<int>&ds,int s,int sum){
    if(i==arr.size()){
        //Print the data structure
        if(s==sum)
        for(auto it:ds)cout<<it<<" ";
        cout<<endl;

     return;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    sub(i+1,arr,ds,s,sum);
    s -= arr[i];
    ds.pop_back();

    //If the element is not pick
    sub(i+1,arr,ds,s,sum);

}

int count(int i,vector<int>&arr,int s,int sum){
    if(i==arr.size()){
        //Print the data structure
        if(s==sum) return 1;

        else return 0;

    
    }
 
    s += arr[i];
    int l = count(i+1,arr,s,sum);
    s -= arr[i];
    

    //If the element is not pick
    int r = count(i+1,arr,s,sum);
    return l+r;

}
int main()
{
    vector<int>p;
    p.push_back(2);
    p.push_back(4);
    p.push_back(1);
    
    vector<int>l;
    // func(0,p,l);
    int s =5;
    // sub(0,p,l,0,s);
    cout<<endl<<count(0,p,0,s)<<endl;


 return 0;
}