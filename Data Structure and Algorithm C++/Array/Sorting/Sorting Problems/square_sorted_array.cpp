#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;


void square(int *p,int n){
    int r[n];
    for(int i=0;i<n;i++){
        r[i] = p[i]*p[i];
    }


    sort(r,r+n);
    for(int i=0;i<n;i++){
       p[i]=r[i];
    }
    
}
void print(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

//merge soprt we can apply how


void mergesquare(int *p,int n){
    
    int res[n];
    int j=0;

//find the negative starting index
while(j<n && p[j]<0){
    j++; //j points to first index of the positive number
    
}

int i =j-1; //last index of the negative number

int y =0;

while(i>=0 && j<n){
 if(p[i]*p[i] < p[j]*p[j]){

    res[y++] = p[i]*p[i];
    i--;

 }
 else{
    res[y++] = p[j]*p[j];
    j++;
 }

}

while(i>=0){
    res[y++] = p[i]*p[i];
    i--;
}

while(j<n){
    res[y++] = p[j]*p[j];
    j++;
}

for(int i=0;i<n;i++){
    p[i] = res[i];
}
}
int main()
{
 

 int arr[] ={-2,-1,4,7,9};

    int n = sizeof(arr)/sizeof(arr[0]);
    // square(arr,n);
    mergesquare(arr,n);
    print(arr,n);

   
        

    
    
 return 0;
}