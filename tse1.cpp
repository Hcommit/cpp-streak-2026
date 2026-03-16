// arithemtic progression
// sum of n numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    int d;
    int a ;
    cout<<"Enter no of terms : gap : First terms"<<endl;
    cin>>n>>d>>a;
    int AP;
    AP= (n*(2*a+((n-1)*d)))/2;
    cout<<AP;
    return 0;


}