#include<iostream>
using namespace std;

void swap(int *arr,int left,int right){
    int tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;
}
int partition(int *arr,int low,int high){
        int pivot_item = arr[low];
        int left = low;
        int right = high;
        while(left<right){
            while(arr[left]<=pivot_item)
                left++;
            while(arr[right]>pivot_item)
                right--;
            if(left<right)
                swap(arr,left,right);
            
        }
        //right final position for pivot element
        arr[low] = arr[right];
        arr[right] = pivot_item;

        return right;
}

void quicksort(int *arr,int low,int high){
    int pivot;
    if(high>low){
        pivot =partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}

void printarray(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
int main(){
    int arr[] ={56,3,12,7,5,67,33,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    cout<<"After quicksort we get"<<endl;
    printarray(arr,n);


return 0;
}