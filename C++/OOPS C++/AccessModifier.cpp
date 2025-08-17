#include<iostream>
#include<string>
using namespace std;

class student{

   public:
   string n1;
   
   string getdata(string l1){
      cout<<"enter the string"<<endl;
      cin>>l1;
      n1 = l1;
      return n1; 
   }
   string nametr(string c1){
     string g1 = c1.append(n1);

      return g1;
   }
};


int main(){
   cout<<"hello"<<endl;

   student s1;
   string r1;
   r1 = s1.getdata("tyo");

   cout<<s1.nametr(r1)<<endl;

}
