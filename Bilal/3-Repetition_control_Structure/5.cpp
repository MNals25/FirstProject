#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"enter the radius of the circle to calculate the area and print it three times\n";
    float radius,area;
    const float p=3.14;
    for(int i=1;i<=3;i++){
        cout<<"Enter the first radius: ";
        cin>>radius;
        area=p*pow(radius,2);
        cout<<"the radius of the circle to: "<<area<<endl;
        }
    
    return 0;
}