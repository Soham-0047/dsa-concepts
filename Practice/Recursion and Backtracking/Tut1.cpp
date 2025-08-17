#include<iostream>
 
using namespace std;


int func(int n){
    if(n==0) return 0;

    else
        cout<<n<<" ";
        return func(n-1);

}

int main()
{
    func(7);
   
 return 0;
}
