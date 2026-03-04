#include<iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter rows and columns of matrix: ";
    cin >> m >> n;

    int A[m][n];

    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for(int j = 0; j < n; j++){    
        for(int i = 0; i < m; i++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}