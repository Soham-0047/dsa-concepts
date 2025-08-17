#include<iostream>
 
using namespace std;

int knap(int *val,int *wt,int W,int n){

if(n==0 || W==0)return 0;

if(wt[n-1]<=W) return max(val[n-1]+knap(val,wt,W-wt[n-1],n-1),knap(val,wt,W,n-1));

if(wt[n-1]>W) return knap(val,wt,W,n-1);
}
int main()
{
    int value[] = {10,40,30,50};
    int wt[] = {5,4,6,3};
    int W = 10;
    int n = sizeof(value)/sizeof(value[0]);
    cout<<knap(value,wt,W,n)<<endl; //maximum total value
  
 return 0;
}