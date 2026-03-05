/* Skeleton file for vertical.cpp
 * For use in CS16
 * (c) 2024 by Z.Matni
 */
// Do not add any other #include statement!
#include <iostream>
using namespace std;

// Declare printV() here
void printV(long long n);

int main() {
    // 1. Get user input
    long long n;
    cout << "Enter integer: ";
    cin >> n;
    // 2. Check input and pass it on to printV()
    if (n > 0) {
        printV(n);
    } else {
        cout << "Input must be a positive integer." << endl;
    }
    return 0;
}

// Define printV() here
void printV(long long n) {
    if (n < 10) {
        cout << n << endl;
    } else {
        printV(n / 10);
        cout << n % 10 << endl;
    }
}