/**
 * Given a 6X8 array of integers, x, already initialized and three integer variables:
 * max, i, and j. Write the necessary code so that max will have the largest value in
 * the array x.
 * @author Wali Morris
 */

#include <iostream>
using namespace std;


int main() {
    int x[6][8];

    // build the multi-dimensional array
    for ( int a = 0; a < 6; a++ ) {
        for ( int b = 0; b < 8; b++ ) {
            int input = 0;
            cout << "Enter a number: "; 
            cin >> input;
            x[a][b] = input;
        }
    }

    // find max in multi-dimensional array x and build visual
    int max = 0;
    for ( int index1 = 0; index1 < 6; index1++) {
        for ( int index2 = 0; index2 < 8; index2++ ) {
            int current = x[index1][index2];
            max =  current > max ? current : max;
            cout << current << " ";
        }
        cout << endl;
    }

    cout << "Max = " << max << endl;
    return 0;
}
