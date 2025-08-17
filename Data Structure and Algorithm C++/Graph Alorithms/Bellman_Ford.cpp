#include<iostream>
#include<bits/stdc++.h>


using namespace std;

struct edge{
    int v;
    int u;
    int w;
};

struct graph{

    int V; //total number of vertices
    int E; //total number of edges
    struct edge *Edge;
};

struct graph *creategraph(int V,int E){
    struct graph *gr = new graph;
    gr->V = V;
    gr->E = E;
    gr->Edge = new edge[E];

    return gr;
}

void printgraph(int *arr,int n){
    cout<<"Shortest Path from source"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<" "<<arr[i]<<endl;
    }
    cout<<endl;
}

void bellmanford(struct graph *gr,int u){
    int V = gr->V;
    int E = gr->E;
    int dist[V];

    for(int i=0;i<V;i++){
        dist[i] = INT_MAX;

    }
    dist[u] =0;

    for(int i=1;i<=V-1;i++){
        for(int j=0;j<E;j++){
            int u = gr->Edge[j].u;
            int v = gr->Edge[j].v;
            int w = gr->Edge[j].w;

            if(dist[u]!=INT_MAX && dist[u]+w<dist[v]){
                dist[v] = dist[u] +w;
            }
        }
    }

    for(int j=0;j<E;j++){
            int u = gr->Edge[j].u;
            int v = gr->Edge[j].v;
            int w = gr->Edge[j].w;

            if(dist[u]!=INT_MAX && dist[u]+w<dist[v]){
                cout<<"negative edge";
                return;
            }
        }

    printgraph(dist,V);
    return;
}



int main()
{ 
    int V = 4;
    int E = 3;

    struct graph *gr = creategraph(V,E);

    gr->Edge[0].u = 0;
    gr->Edge[0].v = 1;
    gr->Edge[0].w = 4;

    
    gr->Edge[1].u = 0;
    gr->Edge[1].v = 2;
    gr->Edge[1].w = 4;


    
    gr->Edge[2].u = 2;
    gr->Edge[2].v = 3;
    gr->Edge[2].w = -1;

    bellmanford(gr,0);



 
 
 return 0;
}


