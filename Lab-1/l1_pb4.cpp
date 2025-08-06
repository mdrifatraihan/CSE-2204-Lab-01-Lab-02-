/*
Given two matrices A (Dimension m*n) and B (Dimension n*p), perform matrix
multiplication and return the resulting matrix.
*/

#include <iostream>
using namespace std;

int main() {
    int m, n, p;

    cout << "Enter number of rows of matrix A (m): ";
    cin >> m;
    cout << "Enter number of columns of matrix A / rows of matrix B (n): ";
    cin >> n;
    cout << "Enter number of columns of matrix B (p): ";
    cin >> p;

    int A[100][100], B[100][100], C[100][100];

    cout << endl << "Enter elements of matrix A (" << m << " x " << n << "):" << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << endl << "Enter elements of matrix B (" << n << " x " << p << "):" << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<p; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    cout << endl << "Matrix A (" << m << " x " << n << "):" << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl << "Matrix B (" << n << " x " << p << "):" << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<p; j++) {
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<p; j++) {
            C[i][j] = 0;
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<p; j++) {
            for (int k=0; k<n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << endl << "Resulting Matrix C (A x B) (" << m << " x " << p << "):" << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<p; j++) {
            cout << C[i][j] << "  ";
        }
        cout << endl;
    }
}
