#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Read and print your name 5 times.\nWhat is your name:";
    cin>>name;
    for(int i=1;i<=5;i++){cout<<i<<" "<<name<<endl;}
    
    return 0;
}