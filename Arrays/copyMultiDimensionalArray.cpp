/**
 * Given two 3X3 arrays of integer, x1 and x2, write the code needed to copy
 * every value from x1 to its corresponding element in x2.
 * @author Wali Morris
 */

#include <iostream>
using namespace std;


int main() {
    int x1[3][3];
    int x2[3][3];

    // build the multi-dimensional array x1
    for ( int a = 0; a < 3; a++ ) {
        for ( int b = 0; b < 3; b++ ) {
            int input = 0;
            cout << "Enter a number: ";
            cin >> input;
            x1[a][b] = input;
        }
    }

    // copy values from x1 to x2 and build visual
    for ( int index1 = 0; index1 < 3; index1++) {
        for ( int index2 = 0; index2 < 3; index2++ ) {
            x2[index1][index2] = x1[index1][index2];
            cout << x2[index1][index2] << " ";
        }
        cout << endl;
    }
    return 0;
}
