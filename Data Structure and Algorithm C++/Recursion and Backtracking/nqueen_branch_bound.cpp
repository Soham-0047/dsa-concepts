#include<iostream>
#include<cstring>
using namespace std;
#define n 4


void print(int p[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool issafe(int row,int col,int slash[n][n],int bslash[n][n],bool rowlook[],bool slashlook[],bool bslashlook[]){

    if(slashlook[slash[n][n]]||bslashlook[bslash[n][n]]||rowlook[row]) return false;

    return true;
}


bool solvequeen(int b[n][n],int col,int slash[n][n],int bslash[n][n],bool rowlook[n],bool slashlook[],bool bslashlook[]){
    if(col>=n)return true;

    for(int i=0;i<n;i++){
        if(issafe(i,col,slash,bslash,rowlook,slashlook,bslashlook)){
            b[i][col] = 1;
            rowlook[i] = true;
            slashlook[slash[i][col]]= true;
            bslashlook[bslash[i][col]] = true;

            if(solvequeen(b,col+1,slash,bslash,rowlook,slashlook,bslashlook)) return true;



            b[i][col] = 0;
            rowlook[i] = false;
            slashlook[slash[i][col]] = false;
            bslashlook[bslash[i][col]] = false;
        }

        
    }
    return false;
}


bool queen(){
    int b[n][n];
//We can use memset() to set all values as 0 or -1 for integral data types also
    memset(b,0,sizeof b);

    int slash[n][n];
    int bslash[n][n];

    bool rowlook[n] = {false};


    bool slashlook[2*n -1] = {false};
    bool bslashlook[2*n -1] = {false};

    for(int r=0;r<n;r++)
        for(int c=0;c<n;c++){
            slash[r][c] = r+c,
            bslash[r][c] = r-c+7;

        }
    

    if(solvequeen(b,0,slash,bslash,rowlook,slashlook,bslashlook)==false){
        cout<<"solution not exist"<<endl;
    }

    print(b);

    return true;
}



int main()
{

    queen();

 return 0;
}


