#include<iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int A[r][c], B[r][c], Sum[r][c];

    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    // Finding sum
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum of matrices:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}