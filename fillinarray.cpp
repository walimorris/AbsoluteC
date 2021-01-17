/**
 * Write some C++ code that will fill an array with 20 values of type int read in from the keyboard.
 *
 * by: Wali
 */

#include<iostream>

using namespace std;

int main() {
    const int SIZE = 20;
    int array[SIZE];

    int i = 0;
    while ( i < SIZE ) {
        array[i] = i;
        i++;
    }

    for ( auto &n : array ) {
        cout << n;
    }
    cout << endl;
}
