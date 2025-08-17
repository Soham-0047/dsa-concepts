#include<iostream>
 
using namespace std;

//need to implement merge sort
//suppose a array si given such as A<B>C<D>E<F

void merge(int *p,int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int tmp[high-low+1];
    int k=0;
    while(i<=mid && j<=high){

        if(p[i]<=p[j]){
            tmp[k] = p[i];
            i++;
            k++;
        }
        else{
            tmp[k] = p[j];
            j++;
            k++;
        }
       
    }
    while(i<=mid){
        tmp[k] = p[i];
        k++;
        i++;
    }
    while(j<=high){
        tmp[k] = p[j];
        k++;
        j++;
    }
    for(int l = low;l<=high;l++){
        p[l] = tmp[l-low];
    }
}
void mergesort(int *p,int low,int high){

    if(low<high){
        int mid = low+(high-low)/2;
        mergesort(p,low,mid);
        mergesort(p,mid+1,high);
        merge(p,low,mid,high);
        
    }
}
void swap(int *p,int l,int h){
    int tmp = p[l];
    p[l] = p[h];
    p[h] = tmp;
}
void wave(int *p,int n){


    //first sort the array
    mergesort(p,0,n-1);


    for(int i=1;i<n;i+=2){
        if(i+1<n){
            swap(p,i,i+1);
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
    int arr[] ={0,-6,9,13,10,-1,8,12,54,14,-5};
    int n = sizeof(arr)/sizeof(arr[0]);

    // mergesort(arr,0,n-1);

    wave(arr,n);
    print(arr,n);
    
 
 
 return 0;
}