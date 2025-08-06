/*
ii) Given an array of n + 1 integers where
each integer is between 1 and n (inclusive),
find the duplicate number.
Example:
nums = [1, 3, 4, 2, 2]
Output: 2
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[101];
    int ar[101] = {0};

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n+1; i++) {
        ar[arr[i]]++;
        if (ar[arr[i]] > 1) {
            cout << arr[i] << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
