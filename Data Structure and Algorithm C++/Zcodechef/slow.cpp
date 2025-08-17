#include<iostream>
using namespace std;


int main(){

    int t;
     cin>>t;

     while(t--){
        int maxf,maxs,sumn;
        cin>>maxf>>maxs>>sumn;

        int div1 = sumn / maxs;

        int div2 = sumn % maxs;

        if(maxf>div1){
                cout<<(div1*maxs*maxs)+(div2*div2)<<endl;
        }
        else{
            cout<<maxf*maxs*maxs<<endl;
        }
     }



     return 0;
}