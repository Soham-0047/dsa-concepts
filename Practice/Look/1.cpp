#include<bits/stdc++.h>
using namespace std;

class game{

    public:
    string player1;
    string player2;
    int points;
    
    int cal_points(int points){
        int initial = points + 10;

        return initial;
    }

};
//Game rule

int main()
{
 int a,b,c;
 int n =6;
 game g1;

 cin>>a>>b>>c;
 for(int i=0;i<n;i++){
    if(a==b){
        cout<<"Inner the loop"<<endl;
       
    }
    if(a=b=c){
        cout<<"There are three matching cases"<<endl;
        if(a/2 ==0 && c/2==0){
            cout<<"Welcome to new game, we have something for you"<<endl;
            cout<<g1.cal_points(3)<<endl;
        }
        
    }
    else{
        cout<<"We have still time to improve";
        break;
    }
 }
 
 return 0;
}