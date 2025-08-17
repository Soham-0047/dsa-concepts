#include<iostream>
 
using namespace std;

//O(logn) and SC  = O(1)
int binarysearch(int *p,int n,int x){
    int low =0;
    
    int high = n-1;
    while(low<=high){

        int mid = low+(high-low)/2;
        if(p[mid] == x) return mid;
        else if(p[mid]<x) low = mid+1;

        else high = mid-1;
    }
    return -1;
    
}

int binaryrecursion(int *p,int low,int high,int x){

    //finding the mid element 
    int mid = low + (high-low)/2;

    //Resursion base case

    if(low>high) return -1;
    if(p[mid]== x) return mid;

    if(p[mid]<x) return binaryrecursion(p,mid+1,high,x);
    else return binaryrecursion(p,low,mid-1,x);

return -1;

}
int main()
{
 int arr[] = {2,30,50,78};
 int n = sizeof(arr)/sizeof(arr[0]);
 cout<<binarysearch(arr,n,78)<<endl;
 cout<<binaryrecursion(arr,0,n-1,50)<<endl;

 return 0;
}