#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "sheaders.h"

// Pre:  v1 and v2 are valid integers passed by reference
// Post: the values of v1 and v2 are swapped
void swap_values(int& v1, int& v2) {
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

// Pre:  a[] is a valid array, start_index >= 0, number_used <= array size
// Post: returns the index of the min (asc) or max (desc) element from start_index onward
int find_index_of_swap(bool desc, int a[], int start_index, int number_used) {
    int index = start_index;
    for (int i = start_index + 1; i < number_used; i++) {
        if (desc) {
            if (a[i] > a[index]) index = i;
        } else {
            if (a[i] < a[index]) index = i;
        }
    }
    return index;
}

// Pre:  a[] is a valid array of size number_used, index starts at 0
// Post: a[] is sorted ascending (desc=false) or descending (desc=true)
void sort(bool desc, int a[], int number_used, int index) {
    if (index >= number_used - 1) return;
    int swap_index = find_index_of_swap(desc, a, index, number_used);
    swap_values(a[index], a[swap_index]);
    sort(desc, a, number_used, index + 1);
}

// Pre:  inf is an open ifstream pointing to a file of integers, fname is the filename
// Post: returns the number of integers in the file, closes the stream when done
int getFileSize(ifstream& inf, string fname) {
    int count = 0;
    int temp;
    while (inf >> temp) {
        count++;
    }
    inf.close();
    return count;
}

// Pre:  fname is a valid file, arr[] has at least 'size' elements allocated
// Post: arr[] is filled with 'size' integers read from the file
void getArray(ifstream& in, string fname, int arr[], int size) {
    in.open(fname);
    for (int i = 0; i < size; i++) {
        in >> arr[i];
    }
    in.close();
}