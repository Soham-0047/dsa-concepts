#include<iostream>
#include<vector>
using namespace std;
 


//Graph using adjancery matrix
void adjgraph(int **adj,int e){
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] =1;

    }
}
void printgraph(int **adj,int v){

     for(int i=0;i<=v;i++){
        for(int j=0;j<=v;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    int **adj = new int*[v+1];


    
    for(int i=0;i<=v;i++){
          adj[i] = new int[i];
        for(int j=0;j<=v;j++){
            adj[i][j] =0;
        }
       
    }
    
    adjgraph(adj,e);
    
    printgraph(adj,v);
   
 return 0;
}