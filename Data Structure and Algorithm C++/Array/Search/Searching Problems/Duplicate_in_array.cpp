#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<vector>
using namespace std;

//Simple brute force approach
//T.C = O(n^2) and S.C = O(1)

void bruteduplicate(int *p,int n){

    // run two for loops ,for each input it search exhaustively throughout the array for duplicates
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            if(p[i] == p[j]){
                cout<<"Duplicate: "<<p[i]<<" present at "<<i<<" and "<<j<<endl;
                    return;
            }
        }
    }

    cout<<"no"<<endl;
}


//next approach using sorting and then search
//It takes T.C = O(nlogn) 
//S.C = O(1)

void duplicatesorting(int *p,int n){
    sort(p,p+n);

    for(int i=0;i<n;i++){
        if(p[i] == p[i+1]){
            cout<<"Duplicates are "<<p[i]<<endl;
        }
    }
}


//Another approach using hashing

// void duplicatehashing(int *p,int n){
    
//     vector<int>arr;
//     arr.push_back(23);
//     arr.push_back(12);

    
    

// }

//Another optimized method using absolute of element in array

void duplicatesusingabsolute(int *arr,int n){
    
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])]<0){
            cout<<"Duplicate is "<<arr[i]<<endl;
            return;
        }
        else arr[arr[i]] = -arr[arr[i]];
    }
}

int main()
{
    int arr[] ={2,3,2,4,5,2,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    bruteduplicate(arr,n);
    duplicatesorting(arr,n);
    duplicatesusingabsolute(arr,n);

    cout<<"Output given in the format of js"<<endl;
    
 
 
 return 0;
}