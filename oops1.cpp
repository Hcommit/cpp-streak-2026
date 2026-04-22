#include<iostream>
using namespace std;

class fruit{
    public:
        string name;
        string color;
        int quantity_kg;
        int price_per_kg;

};
int main(){
    fruit apple;
    cout<<"Enter name and colour of fruit"<<endl;
    cin>>apple.name;
    cin>>apple.color;

    cout<<"enter quantity and price"<<endl;
    cin>>apple.quantity_kg;
    cin>>apple.price_per_kg;

    cout<<"========== Details=============="<<endl; 


    cout<<apple.color<<" "<<apple.name<<endl;
    cout<<"quantity available "<<apple.quantity_kg<<endl;
    cout<<"Best price per kg  "<<apple.price_per_kg<<endl;
}