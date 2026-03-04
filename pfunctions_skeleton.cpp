// File: pfunctions.cpp
#include <iostream>
#include <string> 
using namespace std;

#include "pheaders.h"

// DEFINE THE 2 FUNCTIONS PER THE pheaders.h FILE HERE
// Add Pre- and Post-Condition comments

bool isPalindrome(string s) {
    
    // This MUST be written as a RECURSIVE FUNCTION! (or you get no lab credit)
    if (s.length() <= 1) {
        return true; 
    }
    if (s[0] != s[s.length() - 1]) {
        return false;
    }
    return isPalindrome(s.substr(1, s.length() - 2)); // Recursively check the substring without first and last characters
}

void cleanUp(string &s) { 
    string cleaned = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    s = cleaned;
    cout << s << endl; // This is a TRACE - remove it once the function is completed. 
}


