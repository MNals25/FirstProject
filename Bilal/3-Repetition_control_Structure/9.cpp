#include <iostream>
using namespace std;
int main(){
    cout<<" Simulate the division operation for a given two numbers without using (/) operator. [more important]:\n\n";
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int i=0,temp;
    temp=abs(num1);
    if(num2!=0){
        while(temp>=abs(num2)){
            temp=temp-abs(num2);
            i++;
        }
        if((num1>=0 && num2>=0) || (num1<0 && num2<0))
        cout << "the division of " << num1 << " by " << num2 << " is " << i << " and";
        else
        cout << "the division of " << num1 << " by " << num2 << " is " << -i << " and";

        if (num1>0)
            cout << " the remainder is " << temp << endl;
         else 
            cout << " the reamainder is " << -temp << endl;
    }
    else cout << "YOU can't divide by zero!\n";


    return 0;
}