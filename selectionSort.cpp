/* Main function for selectionSort.cpp
 * For use in CS 16
 * (c) 2024 by Z.Matni
 */
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
#include "sheaders.h"

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    ifstream inf(filename);
    if (!inf) {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }

    int size = getFileSize(inf, filename);
    int* arr = new int[size];
    getArray(inf, filename, arr, size);

    cout << "Original array: " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    int order;
    cout << "Ascending (0) or Descending (1): ";
    cin >> order;
    bool desc = (order == 1);

    sort(desc, arr, size, 0);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}