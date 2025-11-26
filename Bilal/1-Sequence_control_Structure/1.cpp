#include<iostream>
using namespace std;
int main(){
    cout<<"Calculate the area of triangle ( Area =0.5*base*height ) \n\n";
    float Area,base,height;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the height: ";
    cin>>height;
    Area=base*height*0.5;
    cout<<"The area of triangle is = "<<Area<<endl;




    return 0;
}