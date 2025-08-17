#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct item{
    int value,weight;
    item(int value,int weight){
        this->value  = value;
        this->weight = weight;
    }
};

bool compare(struct item a,struct item b){
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;

    return r1>r2;
}

double fractionalknapsack(int w,struct item arr[],int n){
    sort(arr,arr+n,compare);
    //sporting item 
    //function to sort the items in the array
    double findvalue = 0.0;
    
}
int main()
{
    cout<<"fractional knapsack"<<endl;
 return 0;
}