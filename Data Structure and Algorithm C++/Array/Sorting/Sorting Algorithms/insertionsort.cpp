#include<iostream>
using namespace std;

/*
Algorithm:-
suppose we have a array that A[] = 12,5,55,10,4,2,19
insertion sort :-  key = A[i] //key store the first element of the array
now create another variable that is j =i;

check  A[j-1]>key and j>=1 if true then
    A[j] = A[j-1]; //copy the element
    j-- //decrease the j, suppose j=1 then j =0;

continue the loop until it gets false that means A[j-1] <=key

then A[j] = key; //beacause j decreases

//Time comp. O(n^2) and space comp. O(n^2)

*/

void insertionsort(int *arr,int n){

    for(int i=1;i<n;i++){
        int key = arr[i];
        int j =i;
        while(arr[j-1]>key && j>=1){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;

    }
}

void printarray(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
int main(){

    int arr[] ={34,2,18,55,12,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    printarray(arr,n);
return 0;
}