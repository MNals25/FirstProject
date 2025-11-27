#include<iostream>
using namespace std;
int main(){
    cout<<"Calculate the multiplication of 5(from 1 to 5)\n";
    int mul=1;
    for(int i=1;i<=5;i++){
        mul*=i;
        }
    cout<<"is equal: "<<mul;
    return 0;
}