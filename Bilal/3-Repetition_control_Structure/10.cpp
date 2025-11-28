#include <iostream>
using namespace std;
int main(){
   cout<<" Simulate the Multiplication operation for a given two numbers without using (*) operator. [more important] \n\n";
   cout << "enter the first nubmer: ";
   int num1;
   int num2;
   cin >> num1;
   cout << "enter the second number: ";
   cin >> num2;
   int i =1;
   int temp =0;
   while(abs(num2)>=i){
    
    temp += abs(num1);
   
    i++;
   }
   if((num1 >=0 && num2>=0) || (num1 <0 && num2<0))
   cout << "the multiplcation of the first number and the second number is " << temp << endl;
   else 
   cout << "the multiplcation of the first number and the second number is " << -temp << endl;
   
    return 0;
}