#include<iostream>
#include<math.h>
using namespace std;

int fac(int n){
    if(n<=0){
        return 1;
    }
    
    return n*fac(n-1);

}
int fib(int n){
   if(n<=1){
       return n;
   }
    
    return fib(n-1)+fib(n-2);
}

//O(n) and O(1)
int fiboptimized(int n){
    int a=0,b=1,c,i;
    for(i=2;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}

//using formula

int fib3(int n){
    double p = (1+sqrt(5))/2;
    return round(pow(p,n)/sqrt(5));
}
int main()
{
    cout<<fac(4)<<endl;
    cout<<fib(6)<<endl;
    cout<<fiboptimized(5)<<endl;

 return 0;
}