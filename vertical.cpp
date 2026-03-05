/* Skeleton file for vertical.cpp
 * For use in CS16
 * (c) 2024 by Z.Matni
 */
#include <iostream>
using namespace std;

void printV(long long n);

int main() {
    long long n;
    cout << "Enter integer: ";
    cin >> n;
    if (n > 0) {
        printV(n);
    } else {
        cout << "Input must be a positive integer." << endl;
    }
    return 0;
}

void printV(long long n) {
    if (n < 10) {
        cout << n << endl;
    } else {
        printV(n / 10);
        cout << n % 10 << endl;
    }
}