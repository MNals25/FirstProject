#include<iostream>
using namespace std;
int main(){
    cout<<"Calculate and print area of Parallelogram 6 times (Note: area =base* height, base=3):\n";
    float area,height;
    const float base=3;
    for(int i=1;i<=6;i++){
        cout<<"Area of Parallelogram "<<i<<endl<<"height= ";
        cin>>height;
        cout<<"Area="<<base*height<<endl;
    }
}