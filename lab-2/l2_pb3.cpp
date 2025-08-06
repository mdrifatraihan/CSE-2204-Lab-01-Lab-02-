/*
Finding Minimum is a Rotated Sorted
Array: Given a rotated sorted array where all
elements are distinct, find the minimum element.
Example 1:
Input: array = [4,5,6,1,2]
Output: 1;
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ar[n];
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }

    int low = 0, high = n-1, minel = ar[0];

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(ar[mid] <= ar[high]) {
            minel = ar[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << minel << endl;
}