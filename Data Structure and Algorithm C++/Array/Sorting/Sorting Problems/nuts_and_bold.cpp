#include<iostream>
#include<bits/stdc++.h>
 
 
using namespace std;
 
 //problem is nuts and bolts 
 //where we have to match with evry key with it's vcalue in another array
 // here three methods we can apply like using qui9ck sort another in hashing

void swap(int *p,int low,int high){
    int tmp = p[low];
    p[low] = p[high];
    p[high] = tmp;
}
 
 
 int partition(int *p,int low,int high,int pi){
    int i=low;
   

    for(int k=i;k<high;k++){

        if(p[k]<pi){
            swap(p,i,k);
            i++;
        }
        else if(p[k] == pi){
            swap(p,k,high);
            k--;
        }
    }

    swap(p,i,high);

    return i;
 }

 void matchpair(int *p,int *b,int left,int right){

    if(left<right){
        int pi = partition(p,left,right,b[right]);

        partition(b,left,right,p[pi]);

        matchpair(p,b,left,pi-1);
        matchpair(p,b,pi+1,right);


    }
 }

 void print(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
 }

 void hashmap(int *a,int *b,int n){

    unordered_map<int,int>has;

    for(int i=0;i<n;i++){

        has[a[i]] =i;

    }
    for(int i=0;i<n;i++){
        if(has.find(b[i]) != has.end()){
          a[i] = b[i];
        }
    }

    print(a,n);
    print(b,n);

 }
int main()
{
    int a[] ={3,2,1,4};
    int b[] ={2,1,4,3};
    int n = sizeof(a)/sizeof(a[0]);
    // matchpair(a,b,0,n-1);
    // print(a,n);
    // print(b,n);

    hashmap(a,b,n);
    unordered_map<string,int> hm;
    hm["abc"]=1;

    pair<string,int>p;
    
    cout<<hm["abc"]<<endl;
    cout<<hm.at("abc")<<endl;

    cout<<hm["io"]<<endl;//By default give us 0

    cout<<hm["po"]<<endl;//By default give us 0

    unordered_map<string,int>::iterator it;

    for(it = hm.begin();it!=hm.end();it++){
        cout<<it->first<<" "<<it->second<<" "<<endl;
    }
    unordered_map<int,char>hat;
   char arr[] = {'q','a','p','l','t'};
    int n1  = sizeof(arr)/sizeof(arr[0]);
    hat.insert(make_pair(1,'a'));
    int i=2;
    while(i<n1){
        hat.insert(make_pair(i,arr[i]));
        i++;
    }
    for(auto i:hat){
        cout<<i.first<<" "<<i.second<<" "<<endl;
         }
 return 0;
}