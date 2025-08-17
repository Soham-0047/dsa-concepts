#include<iostream>
 
using namespace std;
 
int main()
{
 int n,m;
 cin>>n>>m;
 int adjmat[n+1][n+1];

 for(int i=0;i<m;i++){

    int u,v;
    cin>>u>>v;
    adjmat[u][v] =1;
    adjmat[v][u] =1;


 }


 for(int i=0;i<n+1;i++){

    for(int j=0;j<n+1;j++){

        if(adjmat[i][j]==1){
            cout<<adjmat[i][j]<<" ";
        }

        
    }
    cout<<endl;
 }
 
 return 0;
}