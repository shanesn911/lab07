/* Main function for palindrome.cpp
 * For use in CS 16
 * (c) 2024 by Z.Matni
 */
#include <iostream> // for cout, cin, endl
#include <string>   // for string
using namespace std;
#include "pheaders.h"
#include "pfunctions.cpp"

int main() {
    // 1. Get a string from the user (see examples given)
    string s;  
    cout << "Enter a sentence: ";
    getline(cin, s);
    // 2. Clean up the string using the required function
    cleanUp(s);
    // 3. Check to see if string is a palindrome
    if (isPalindrome(s)) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }
    return 0;
}

