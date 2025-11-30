#include<iostream>
using namespace std;
int main(){
    cout<<"Write a program in C++ to print the following pattern]:\n";
    
    for(int i=1;i<=7;i++){
        if(i==1||i==7)
        cout<<" XXXXX\n";
        else if(i==2||i==6)
        cout<<"X\tX\tX\tX\n";
        else if(i==3||i==5)
        cout<<"X\t\tX\tX\n";
        else
        cout<<"x\txxxxxxx\txxxxxxx\n";
    }
   
    }