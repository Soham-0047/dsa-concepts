#include<iostream>
using namespace std;

//start with linear search
int linearsearch(int *p,int n,int key){
    for(int i=0;i<n;i++){
        if(p[i]==key){
            return i;
        }
    }
    return -1;
}

//binary search 😀

int main(){
    int arr[]={34,13,78,22,10,67,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the data you want to find'😀'"<<endl;
    cin>>key;
    cout<<linearsearch(arr,n,key);


}