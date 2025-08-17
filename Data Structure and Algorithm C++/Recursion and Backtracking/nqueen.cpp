#include<iostream>
 
using namespace std;

//First check for is our queen is safe where we want to place our queen
bool issafe(int **p,int row,int col,int n){
    for(int i = 0;i<row;i++){
        if(p[i][col]==1){
            return false;
        }
    }
    int x = row;
    int y = col;
    while(x>=0 && y>=0){
        if(p[x][y]==1){
            return false;
        }
        x--;
        y--;
        
    }
    x = row;
    y = col;
     while(x>=0 && y<n){
        if(p[x][y]==1){
            return false;
        }
        x--;
        y++;
        
    }
    return true;
}


bool queen(int **p,int row,int n){

    if(row>=n){
        return true;
    }
    for(int col = 0;col<n;col++){
        if(issafe(p,row,col,n)){
            p[row][col] =1;
        
        if(queen(p,row+1,n)){
            return true;
        }

        p[row][col] = 0;
        }

    }
    return false;
}
int main()
{
    int n;
    cin>>n;

    int **p = new int*[n];

    
    for(int i=0;i<n;i++){
        p[i] = new int[n];
        for(int j=0;j<n;j++){
            p[i][j] =0;
        }
    }

    if(queen(p,0,n)){
          for(int i=0;i<n;i++){
       
        for(int j=0;j<n;j++){
           cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    }

 return 0;
}