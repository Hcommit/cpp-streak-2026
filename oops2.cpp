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
    fruit *mango= new fruit();

    mango->name="mango";

    cout<<mango->name<<endl;
}