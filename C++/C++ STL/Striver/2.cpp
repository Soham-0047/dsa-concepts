#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Calculate switch case function

void switchCalculation(char a){
     switch(a) {
        case 'K':
            cout<< "My pLace"<<endl;
            break;
        case 'D':
            cout<< "You are from Delhi"<<endl;
            break;
        case 'M':
            cout<< "You are from Mumbai"<<endl; 
        default:
            cout<< "You are from somewhere else"<<endl;
        }
}
// Function to calculate the age
void ageCalculate(int age){
     if(age <= 10){
        cout<<"You are a child."<<endl;
    } else if(age <= 20){
        cout<<"You are a teenager."<<endl;
    } else if(age <= 30){
        cout<<"You are a young adult."<<endl;
    } else {
        cout<<"Nothing"<<endl;
    }
}

// Loop function

void loopFunction(int n){
    for(int i=0;i<=5;i++){
        cout<<i<<endl;
    }
}

int main(){
    // Integer, float, double, long long as data type size
    // string name;
    // getline(cin,name);
    // cout<<name;
    // int age;
    // cout<<"Enter your age: "<<endl;
    // cin>>age;
    // ageCalculate(age);

    // Switch
    // char yourPlace;
    // cin >> yourPlace;
    // switchCalculation(yourPlace);

    // Array
    // int arr[] = {2,4,12,0,10};
    // cout<<arr[2]<<endl; // Accessing the third element of the array
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl; // Size of the array

    // Loop function
    // loopFunction(12);
    
    // do-while loop run atleast once
    // int i =4;
    // do {
    //     cout<<"Run Once"<<i<<endl;
    //     i++;
    // }while(i<=8);

    return 0;
}