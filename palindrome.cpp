/* Main function for palindrome.cpp
 * For use in CS 16
 * (c) 2024 by Z.Matni
 */
#include <iostream>
#include <string>
using namespace std;
#include "pheaders.h"

int main() {
    string s;  
    cout << "Enter sentence: " << endl;
    getline(cin, s);
    cleanUp(s);
    if (isPalindrome(s)) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }
    return 0;
}