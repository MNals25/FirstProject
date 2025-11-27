#include<iostream>
using namespace std;
int main(){
    cout<<"Input three numbers and find the maximum between the given three numbers \n\n";
    int n1,n2,n3;
    cout<<"Enter the number 1: ";
    cin>>n1;
    cout<<"Enter the number 2: ";
    cin>>n2;
    cout<<"Enter the number 3: ";
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<"The number 1 is maximum"<<endl;
    }else if(n2>n1 && n2>n3){
        cout<<"The number 2 is maximum"<<endl;
    }else{
        cout<<"The number 3 is maximum"<<endl;
    }

    return 0;
}