#include<bits/stdc++.h>
#include<iostream>
 
using namespace std;
 
void reversearray(int *arr,int l,int n){
    if(l>n)return;
    // while(l<n){
    //     swap(arr[l],arr[n-1]);
    //     l++;
    //     n--;
    // }
    //another way using recursion
    swap(arr[l],arr[n-1]);
    reversearray(arr,l+1,n-1);
}
bool stringpallindrome(int i,string s){
   
   //This is the base case , when i reach to n/2 then it'll terminate the programme

   if(i>=s.size()/2)return true;
   if(s[i] != s[s.size()-i-1])return false;

   return stringpallindrome(i+1,s);
    
}
int nthfibnumbersum(int n){
    if(n<=1)return n;

    int tmp = nthfibnumbersum(n-1);
    int tmp1 = nthfibnumbersum(n-2);

    return tmp+tmp1;
}
void print(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    int arr[] = {2,9,12,66,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    reversearray(arr,0,n);
    print(arr,n);
    string s ="MADAM";
    cout<<stringpallindrome(0,s)<<endl;
    cout<<nthfibnumbersum(5)<<endl;
 return 0;
}