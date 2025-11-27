#include<iostream>
using namespace std;
int main(){
    cout<<"Check whether a character is alphabet or not:a= ";
    char a;
    cin>>a;
    if((a>=65 && a<=106)||(a>=97 &&a<=122)){
            cout<<"The character is alphabet ";}
    else{ cout<<"The character is not alphabet ";}

    return 0;
}