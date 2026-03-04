// return sum of prefix elements wihtout creating a new array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements of the array - "<<endl;
    cin>>n;
    int i;

    int arr[n];
    cout<<"Enter "<<n<<" elements of the array - "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    cout<<"New array - "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;




}