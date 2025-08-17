#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
//code for find duplicate elements
//there are several techniques to bucket sort



void print(int *arr,int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
 }
int main()
{
    int arr[] = {0,1,1,4,3,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);

    cout<<endl;
    print(arr,n);
  
 return 0;
}