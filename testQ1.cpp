//Write a program to print all even numbers from -100 to 100 using a loop.
#include <iostream>
using namespace std;
int main(){ 
    cout<<"Even number from 1 to 100 are:"<<endl;
    for(int i=-100;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}