#include<iostream>
using namespace std;
//for sorting 0s,1s,2s problem there are two algorithms like counting sort and quick sort
//Although it's use time complexity as O(n) and space O(1)
//not a big problem simple qucik sort

void swap(int *p,int low,int right){
    int tmp = p[low];
    p[low] = p[right];
    p[right] = tmp;
}
int partition(int *p,int low,int high){
    int pivot = p[low];
    int left = low;
    int right = high;
    while(left<right){
        while(p[left]<=pivot){
            left++;
        }
        while(p[right]>pivot){
            right--;
        }
        if(left<right){
            swap(p,left,right);
        }
    }
    p[low] = p[right];
    p[right] =pivot;

    return right;

}
void quicksort(int *p,int low,int high){
    if(low<high){
        int pi = partition(p,low,high);
        quicksort(p,low,pi-1);
        quicksort(p,pi+1,high);

    }
}

//maximum number of times appeared in array
//create function which takes array amd size as input and sort them first of all
//for sort after scan methosd T.C= O(nlogn) + O(n) and S.C = O(1)

int maximumoccur(int *p,int n){
    quicksort(p,0,n-1);
                                          
    int mc =1;
    int res = p[0];
    int cc =1;
    for(int i=1;i<n;i++){
        if(p[i]==p[i-1]) cc++;
        else{
            if(cc>mc) {
                mc = cc;
                res =p[i-1];

            }

            cc =1;
        }

    }
    return res;

}

//using hashing
//Gives T.C as O(n) and S.C = O(n)
//if suppose there is an array like 1,1,2,1,2
//k is the range between 1 and 2
//now if p[1%2] = p[1%2]+k
//        p[1] = p[1] +k = p[1] = 1+2 =3

int hashf(int *p,int n,int k){
    for(int i=0;i<n;i++)
    {
        p[p[i]%k] += k;

    }
    int max = p[0];
    int res =0;
    for(int i=0;i<n;i++){
        if(p[i]>max)
        {
            max = p[i];
            res = i;
        }
    }

    return res;
}



void print(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    

    }
    cout<<endl;
}
int main()
{
  int p[] = {0,1,1,0,1,2,1,2,1,0,0,1};
  int n = sizeof(p)/sizeof(p[n]);
  quicksort(p,0,n-1);
    print(p,n);
    cout<<maximumoccur(p,n)<<endl;
    cout<<hashf(p,n,2)<<endl;

   

 return 0;
}