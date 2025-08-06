/*
Find the first occurrence of a target :
Given an array of integers, find the index of the 
first occurrence of a target value x. if the target
is not found, return -1.

Example 1:
Input: array = [5,3,7,9,3]; x = 3;
Output: 1
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

    for(int i=0; i<n; i++) {
        if(ar[i] == x) {
            cout << i << endl;
            return 0;
        }
    }
}