/*
Find the Maximum Element in an Array : 
Given an array of integers,find the maximum value.
Example 1:
Input: array = [1,7,3,9,5]
Output: 9
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

    int maxm = ar[0];
    for(int i=0; i<n; i++) {
        if(maxm < ar[i]) {
            maxm = ar[i];
        }
    }

    cout << maxm << endl;
}