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
        for(int j=n;j>=i;j--){
            cout<<n-j+1<<" ";
        }
     }
}

void patter8(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

         for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;

    }
}


void patter9(int n) {
    
}
int main(){

    int n = 5;
    // patter1(n);
    patter8(n);


return 0;
}