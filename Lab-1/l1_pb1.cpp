//To Display n number of natural numbers and their sum.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    } 
    cout << "The sum of n mumber is : " << sum << endl;
}