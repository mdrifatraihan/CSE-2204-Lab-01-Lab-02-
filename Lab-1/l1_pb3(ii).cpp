/*
Rewrite the previous problem to make the
row parameter of the matrix as a default
argument.
*/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    int matrix[100][100];  

    cout << "Enter the value of n : ";
    cin >> n;
    m = 4;

    cout << "Enter the elements of the matrix:" << endl;
    for(int i=0; i<m; ++i) {
        for(int j=0; j<n; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << endl << "Matrix (" << m << " x " << n << "):" << endl;
    for(int i=0; i<m; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

}
