//Take an integer input from the user and find the sum of its digits.
#include <iostream>
using namespace std;
int main(){
    int number,sum=0,digit;
    cout<<"Enter a number:"<<endl;
    cin>>number;

    while(number!=0){
        digit=number%10;
        sum=sum+digit;
        number=number/10;
    }
    cout << "Sum of digits = " << sum << endl;
    return 0;
}