#include<iostream>
using namespace std;

int main(){
    int i,j;
    int n =5;



// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            cout<<"*"<<" ";
        }
        cout<<endl;
    }


cout<<"\nSecond pattern\n";

for(i=0;i<n;i++)
{

    for(j=0;j<n;j++)
    {
        if(i>=j){
             cout<<"*"<<" ";}
       
    }
    cout<<endl;

}
// *
// * *
// * * *
// * * * *
// * * * * *

cout<<"\nThird Pattern\n"<<endl;

for(i=0;i<n;i++){

    for(j=0;j<n;j++){

        if(i<=j){
            cout<<"*"<<" ";
        }

    }

    cout<<endl;
}



cout<<"\nFourth Pattern\n"<<endl;

for(i=0;i<=n;i++)
{

    for(j=0;j<=n;j++)
    {
        if(i>j){
        cout<<i<<" ";
        }
        
    }
    cout<<endl;
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


for(i=0;i<n;i++){

    
    for(j=0;j<n;j++){
        
    }
}






}