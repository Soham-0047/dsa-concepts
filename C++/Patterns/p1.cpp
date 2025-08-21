#include<iostream>
using namespace std;

void patter1(int n){
     for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
    }
}

void patter2(int n){
     for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
    }
}

void patter3(int n){
     for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<=i;j++){
            cout<<j<<" ";
        }
    }
}

void patter4(int n){
     for(int i=0;i<=n;i++){
        cout<<endl;
        for(int j=0;j<=i;j++){
            cout<<j<<" ";
        }
    }
}

void patter5(int n){
     for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
    }
}

void patter6(int n){
     for(int i=0;i<=n;i++){
        cout<<endl;
        for(int j=i;j<n;j++){
            cout<<"*"<<" ";
        }
    }

}

void patter7(int n){
     for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }
}



int main(){

    int n = 5;
    // patter1(n);
    patter7(n);


return 0;
}