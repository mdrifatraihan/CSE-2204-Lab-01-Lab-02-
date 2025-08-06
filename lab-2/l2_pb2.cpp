/*
Search is a Rotated Sorted Array : 
Given a sorted array that is rotated at some 
pivot and a target value x,determine the index of x.
if x is not found, return -1
Example-1: 
Input : array = [3, 4, 5, 1, 2]; x = 2
Output: 4
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

    int x;
    cin >> x;

    int low = 0, high = n-1, res = -1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(ar[mid] == x) {
            res = mid;
            break;
        }

        if(ar[low] <= ar[mid]) {
            if(ar[low] <= x && x < ar[mid]) {
                high = mid-1;
            } else {
                low = mid + 1;
            }
        } else {
            if(ar[mid] < x && x <= ar[high]) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
    }

    cout << res << endl;
}