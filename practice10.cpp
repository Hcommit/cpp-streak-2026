#include<iostream>
using namespace std;

int main() {
    int m, n, p;

    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    cout << "Enter columns of second matrix: ";
    cin >> p;

    // Condition check
    if(n <= 0 || m <= 0 || p <= 0){
        cout << "Invalid matrix size!";
        return 0;
    }

    int A[m][n], B[n][p], C[m][p];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix with 0
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    cout << "Result matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}