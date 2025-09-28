#include<bits/stdc++.h>
using namespace std;

// Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]

void print(int mat[][3]){
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
 }
}

void printVector(vector<vector<int>> &m){
    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[i].size();j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void calculateRow(vector<vector<int>> &m,int r,int c, int i){
    // if 0 is found then put -1
    for(int k=0;k<c;k++){
        if(m[i][k] != 0){
            m[i][k] = -1;
        }
    }
}

void calculateCol(vector<vector<int>> &m,int r,int c, int i){
      for(int k=0;k<r;k++){
        if(m[i][k] != 0){
            m[i][k] = -1;
        }
    }
}

// Main function
vector<vector<int>> finalMatrix(vector<vector<int>>&vec, int r, int c){
    // this loop will set all rows and col as -1 if 0 is present
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(vec[i][j] == 0){
                calculateRow(vec,r,c,i);
                calculateCol(vec,r,c,j);
            }
        }
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(vec[i][j] == -1){
                vec[i][j] = 0;
            }
        }
    }

    return vec;
}
int main(){
    int mat[][3] = {{1,1,1},{1,0,1},{1,1,1}};
    // print(mat);
    // vector initialization
    vector<vector<int>> vec = {{1,1,1},{1,0,1},{1,1,1}};
    int rows = vec.size();
    int cols = vec[0].size();

    cout<<rows<<" "<<cols<<endl;
    vector<vector<int>> finalMatrixe = finalMatrix(vec,rows,cols);
    printVector(finalMatrixe);

    return 0;
}