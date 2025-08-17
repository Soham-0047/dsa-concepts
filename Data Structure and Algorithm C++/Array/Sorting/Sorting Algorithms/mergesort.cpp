#include<iostream>
using namespace std;

//here we are going to write two functions

void merge(int *arr,int left,int mid,int right){
    int i=left;
    int j = mid+1;
    int k = 0;
    int tmp[right-left+1];
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            tmp[k] = arr[i];
            i++;
            k++;
        }
        else{
            tmp[k] = arr[j];
            j++,k++;
        }
    }
        
        while(j<=right){
            tmp[k] = arr[j];
                k++;
                j++;
    }
    
        while(i<=mid){
            tmp[k] = arr[i];
             k++;
             i++;
    }

    for(i=left;i<=right;i++){
        arr[i] = tmp[i-left];
    }
}

void mergesort(int *arr,int left,int right){
    int mid;
    if(left<right){
      
      
      
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

void printarray(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
int main(){
    int arr[]={54,26,93,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    printarray(arr,n);


return 0;
}