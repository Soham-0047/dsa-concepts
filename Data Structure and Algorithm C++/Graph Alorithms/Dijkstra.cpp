#include<iostream>
 
using namespace std;

#define n 4


int mindist(int dist[],bool spset[]){
    int min = INT_MAX,min_index;
    for(int i=0;i<n;i++){
        if(dist[i]<=min && spset[i]==false){
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

void printsolution(int dist[]){
    for(int i=0;i<n;i++){
        cout<<i<<" "<<dist[i]<<endl;
    }
}
void dijkstra(int gr[n][n],int src){
    int dist[n]; //distance from src to every vertex

    bool spset[n];

//Intially distance value from source vertex is infinite 
    for(int i=0;i<n;i++){
        dist[i] = INT_MAX;
        spset[i] = false;

    }

    dist[src] = 0;
    for(int j=0;j<n-1;j++){
        int u = mindist(dist,spset);

        //picked vertex

        spset[u] = true;

        //Adjacent vertices of poicked vertex
        for(int v=0;v<n;v++){

            if(!spset[v]&&gr[u][v] && dist[u]!=INT_MAX &&(dist[u]+gr[u][v]<dist[v])){
                dist[v] = dist[u] + gr[u][v];
            }

        }
    }

    printsolution(dist);
}
int main()
{   
    int gr[n][n] = {{0,1,1,2},
                    {2,1,0,2},
                    {3,1,0,2},
                    {2,1,2,0}};

                    dijkstra(gr,0);


 return 0;
}