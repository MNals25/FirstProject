#include<iostream>
using namespace std;
int main(){
    cout<<" Calculate and print the total amount of sale, where two numbers are given. The first number (U) represents the unit price of a book and the second number (Q) represents the quantity of the books sold. Total=U*Q.\n\n";
    float u,q,total;
    cout<<"Enter the price of a book: ";
    cin>>u;
    cout<<"Enter the quantity of the books sold: ";
    cin>>q;
    total=u*q;
    cout<<"Total amount of sale is: "<<total<<endl;

}