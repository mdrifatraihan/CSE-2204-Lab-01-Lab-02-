/*
Given an array of integers nums and a target value target, return the indices of the two numbers
that add up to the target.
Example:                nums = [2, 7, 11, 15], target = 9
                        Output: [0, 1] (because nums[0] + nums[1] == 9)
*/

#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter array size: ";
    cin >> n;

    int nums[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "No two elements found with given target sum." << endl;
    }
}
