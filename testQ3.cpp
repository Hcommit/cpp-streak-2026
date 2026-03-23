//Write a program that counts how many digits are in a given number.
#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    if(number==0){
        count =1;
    }else
    if (number < 0) {
            number = -number;
        }
    while(number !=0){
        number =number/10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}


 