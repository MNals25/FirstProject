#include<iostream>
using namespace std;
int main(){
    cout<<" Check whether a number is negative, positive or zero \n\n";
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>0){
        cout<<"The number is positive ";
    }else if(num<0){
        cout<<"The number is negative";
    }else{
        cout<<"The number is equal Zero";
    }

    return 0;
}