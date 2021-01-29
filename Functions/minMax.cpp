/**
 * Write the definition of a function minMax that has five parameters. The first three
 * parameters are integers. The last two are set by the function to the largest and
 * smallest of the values of the first three parameters. The function does not return
 * a value
 *
 * @author Wali Morris
 *
 */

#include<iostream>

using namespace std;

void minMax(int a, int b, int c, int *big, int *small) {
    *small = a < b ? a : b;
    *small = *small < c ? *small : c;
    *big = a > b ? a : b;
    *big = *big > c ? *big : c;
}


int main() {
    int a = 31, b = 5, c = 19, big, small;
    minMax(a, b , c, &big, &small);
    cout << big << endl;
    cout << small << endl;

    return 0;
}
