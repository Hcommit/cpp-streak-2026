// transpose using swap
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n = 3;

    int arr[n][n] = {
        {2,3,4},
        {5,6,7},
        {8,9,10}
    };

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
