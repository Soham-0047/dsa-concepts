#include<iostream>
 
using namespace std;
//Merge of two sortd array within O(m+n) T.C and O(1) space complexity
void mergearray(int *a,int m,int *b,int n){
    int count =m;
    int i =n-1;
    int j = count-1;
    int k = (m+n)-1;
    for(;k>=0;k--){
        if(b[i]>a[j]){
            a[k] =b[i];
            i--;
            if(i<0) break;
        }
        else{
            a[k] =a[j];
            j--;
        }
    }
}
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int m =5;
    int n = 2;

 int a[m] = {1,2,3};
 int b[n] ={4,5};

 mergearray(a,3,b,2);

    print(a,5);

 
 return 0;
}