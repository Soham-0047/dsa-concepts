#include<iostream>
 
using namespace std;
 
 /*In this case we assume that there are three rods like A,B,C
 A-> From
 B->Aux
 C->Destination or top

 


 */
 void towerofhanoi(int n,char fr,char top,char aux){

    //if 1 disk left

    if(n==1){ 
    cout<<"Move the disk "<<n<<" "<<fr<<" to "<<top<<endl;
    return;}

    //move disks from A to B using C as Aux 
    towerofhanoi(n-1,fr,aux,top);

    cout<<"Move remaining "<<n<<" "<<fr<<" to "<<top<<" "<<endl;

    towerofhanoi(n-1,aux,top,fr);

 }
int main()
{
 towerofhanoi(3,'A','C','B');

 
 return 0;
}