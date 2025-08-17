#include<iostream>
 
using namespace std;
 
int find_sum(int *p, int n,int sum){
    int s=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(p[i]+p[j] == sum){
            cout<<p[i]<<" "<<p[j]<<endl;
           } 
        }
    }
}

//Second method
//In this case we   use sorting the array in ascending order

int find_sum_sorting(int*p,int n,int s){
    
}
int main()
{
 int n[] = { 8, 7, 2, 5, 3, 1 };
    int sum = 10;
    int size = sizeof(n) / sizeof(n[0]);
    find_sum(n,size,sum);
     

 
 return 0;
}