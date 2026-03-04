/* Main function for selectionSort.cpp
 * For use in CS 16
 * (c) 2024 by Z.Matni
 */
#include <iostream> // for cout, cin, endl
#include <fstream>  // for ifstream
#include <string>   // for string
#include <cstdlib>  // for exit
using namespace std;
#include "sfunctions.cpp"
#include "sheaders.h"

int main() {
    // 1. Get filename from user and check it
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    ifstream inf(filename);
    if (!inf) {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }
    
    // 2. Get size of file to then create dynamic array
    //      Note: You HAVE to use the functions:
    //      getFileSize() and getArray() here
    int size = getFileSize(inf, filename);
    int* arr = new int[size];
    getArray(inf, filename, arr, size);

    // 3. Print original array (see PDF lab description for details)
    cout << "Original array: " << endl; 
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Ask user for ascending or descending sort
    int order;
    cout << "Ascending (0) or Descending (1): ";
    cin >> order;
    bool desc = (order == 1);

    // 5. Run selection sort on the array
    //      Note: You HAVE to use the function sort() here
    sort(desc, arr, size, 0);

    // 6. Print sorted array (see PDF lab description for details)
    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 7. Clean up dynamic array
    delete[] arr;

    return 0;
}