#include<iostream>
using namespace std;
int main(){
    cout<<"Check whether a number is divisible by 5.\n\n";
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    if(num % 5==0){cout<<"the number you entered is divisible by 5.";}
    else{cout<<"the number you entered is not divisible by 5.";}
    return 0;
}