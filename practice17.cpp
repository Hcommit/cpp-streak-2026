// rotation of matrix 90 degrees
/*1 2 3 
 4 5 6 
 7 8 9 

 return 
 7 4 1
 8 5 2  ---> reverse of transpose
 9 6 3 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<vector<int>> &arr, int n){

    // Transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main(){

    int n;
    cout<<"Enter size of square matrix: ";
    cin>>n;

    vector<vector<int>> vec(n, vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter element at "<<i<<" "<<j<<": ";
            cin>>vec[i][j];
        }
    }

    cout<<endl<<"Original matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;


    rotateArray(vec,n);

    cout<<"Rotated Matrix:\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}