/**
 * Given two 2X3 arrays of integer, x1 and x2, both already initialized, and a boolean
 * variable x1Rules. Write the code that is necessary for x1Rules to be true if and
 * only if every element in x1 is bigger than its corresponding element in x2 and is
 * false otherwise.
 * 
 * @author Wali Morris
 */

#include <iostream>
using namespace std;


int main() {
    int x1[2][3];
    int x2[2][3];

    // build the multi-dimensional array x1
    cout << "Build Array X1 >>>>>>>>>>>>>" << endl;
    for ( int a = 0; a < 2; a++ ) {
        for ( int b = 0; b < 3; b++ ) {
            int input = 0;
            cout << "Enter a number: ";
            cin >> input;
            x1[a][b] = input;
        }
    }

    // build the multi-dimensional array x2
    cout << "Build Array X2 >>>>>>>>>>>>>" << endl;
    for ( int a = 0; a < 2; a++ ) {
        for ( int b = 0; b < 3; b++ ) {
            int input = 0;
            cout << "Enter a number: ";
            cin >> input;
            x1[a][b] = input;
        }
    }

    // check if all x1 values are larger
    bool x1Rules;
    for ( int index1 = 0; index1 < 2; index1++) {
        for ( int index2 = 0; index2 < 3; index2++ ) {
            x1Rules = x1[index1][index2] > x2[index1][index2];
        }
    }
    cout << x1Rules;
    return 0;
}
