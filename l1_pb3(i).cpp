/*
To read a matrix of size m*n from the
keyboard and display the same on the screen
using the function
*/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    int matrix[100][100];  

    cout << "Enter the value of m & n : ";
    cin >> m >> n;

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
