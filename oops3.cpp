#include<iostream>
using namespace std;
class Rectangle{
    public:
        int l;
        int b;

        Rectangle(int x,int y){
            l=x;
            b=y;
        }
};
int main(){
    int m,n;
    cout<<"Enter lenght anf breath - "<<endl;
    cin>>m;
    cin>>n;

    Rectangle r1(m,n);

    cout<<"lenght is "<<r1.l<<endl;
    cout<<"breadth is "<<r1.b<<endl;
    cout<<" AREA IS "<<r1.l*r1.b<<endl;
    
}
