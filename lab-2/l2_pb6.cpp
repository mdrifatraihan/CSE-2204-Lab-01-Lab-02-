/*
Count Occuences of a Target : 
Given an array of integers, count the number
of times a target value x appears in the array.
Example 1: 
Input: array = [2,4,2,8,2]; x = 2
Output: 3
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

    int count = 0;
    for(int i=0; i<n; i++) {
        if(ar[i] == x) {
            count++;
        }
    }

    cout << count << endl;
}