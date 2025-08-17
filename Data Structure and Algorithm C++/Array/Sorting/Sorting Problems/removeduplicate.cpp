#include<bits/stdc++.h>
 
using namespace std;
 
 //in this case we have two approaches
 //first make an array and initialize with 1 as true
 //run two for loop, outer loop pick the element and inner loop compare with other array elements

 void removeduplicates(int *arr,int n){
   int ptr[n];
   for(int i=0;i<n;i++){
    ptr[i] =1;
   }

    for(int i=0;i<n;i++){
        if(ptr[i] == 1){
            for(int j=i+1;j<n;j++){

                if(arr[i] == arr[j]) ptr[j] = 0;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(ptr[i] ==0){
            cout<<arr[i]<<",";
        }
    }
 }

 //now here we are going to use hash

void removeduplicatesusinghash(int *p,int n){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        
    }
}
int main()

{
    int arr[] = {1,1,2,3,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    removeduplicates(arr,n);

     cout<<endl;
     map<int,int>m;

        
   
    
 return 0;
}