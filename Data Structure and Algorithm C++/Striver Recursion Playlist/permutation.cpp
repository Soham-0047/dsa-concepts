
#include<bits/stdc++.h>

 
using namespace std;
 
 void perutil(int index,vector<int>&arr,vector<vector<int>>&ans){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        perutil(index+1,arr,ans);
        swap(arr[i],arr[index]);
    }
 }


vector<vector<int>> permute(vector<int>&arr){
    vector<vector<int>>ans;
    perutil(0,arr,ans);

    return ans;
}
int main()
{
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

 
 
    vector<vector<int>>ans;
    ans = permute(arr);
    
    for(vector<int>vecd :ans){
        for(int y : vecd){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    cout<<"Another method to print 2D"<<endl;

    //    for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


 return 0;
}