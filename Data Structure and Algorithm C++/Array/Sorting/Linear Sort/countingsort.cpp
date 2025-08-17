#include<iostream>
 
using namespace std;

// T.C = O(n+k)
// S.C = O(n)
void counting(int *arr,int n,int k){
    int b[n];
    int count[k];
    for(int i=0;i<k;i++){
        count[i] =0;
    }
    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    for(int j=1;j<=k;j++){
        count[j] = count[j] + count[j-1];
    }
    //now watch carefully
    //first of all we pick the last index of our main array and decrease one by one till 0
    for(int i=n-1;i>=0;i--){
        // Goto count array as pick the arr[i] index 
        // count[arr[i]]
        // Then decrease it by 1 such as --count[arr[i]]
        // Now it's turned into the index of our another array b[n]
         b[--count[arr[i]]] = arr[i];
                //  b[count[arr[i]]-1]    = arr[i];
                //  --count[arr[i]];
    }
    for(int i=0;i<n;i++){
        arr[i] = b[i];
    }

} 
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
   
    int arr[] ={0,1,1,4,3,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    counting(arr,n,k+1);
    print(arr,n);

 return 0;
}