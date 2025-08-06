/*
i) Given an array, move all 0s to the end of the
array without changing the order of the other
elements.
Example:
nums = [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int nums[100];

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int in = 0;
    for(int i=0; i<n; i++) {
        if(nums[i] != 0) {
            nums[in] = nums[i];
            in++;
        }
    }

    while(in < n) {
        nums[in] = 0;
        in++;
    }

    cout << "After the operation the array is : ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

}
