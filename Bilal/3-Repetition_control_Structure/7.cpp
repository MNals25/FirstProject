#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Calculate and print multiplication table from 1 to 12:\n";
    int mul;
    for(int i=1;i<=12;i++){
        for(int j=1;j<=12;j++){
            mul=i*j;
            cout<<i<<"*"<<j<<"="<<mul<<endl;
        }
        cout<<"*************\n";
    }
    
    return 0;
}