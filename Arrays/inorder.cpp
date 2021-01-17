/**
 * Write a function named outOfOrder that takes as a parameter an array of double and an int
 * parameter named size and returns a value of type int. This function will test this array
 * for being out of order. The function returns -1 if the elements are not out of order,
 * otherwise, it will return the index of the first element of the array that is out of order.
 *
 * By: Wali
 */

#include<iostream>

using namespace std;

/**
 * returns -1 if array is in order and the index of the array if it is out of order.
 * @param array : The array to be examined
 * @param size : The size of the array
 * @return int
 */
int outOfOrder(const double array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] > array[i+1] ) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size = 0;

    cout << "Enter a for the size of your array: ";
    cin >> size;

    double array[size];

    cout << "\nNow choose your floating point numbers(ex: 2.2)!" << endl;
    for ( int i = 0; i < size; i++ ) {
        cout << "Enter #" << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "\nLet's check that these numbers are in order." << endl;
    int inOrder = outOfOrder(array, size - 1);
    if (inOrder == -1) {
        cout << "All submitted values in order!" << endl;
    } else {
        cout << "Out of order value found at index: " << inOrder << endl;
    }
}
