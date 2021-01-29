/**
 * Write code that will fill the array a with numbers typed in at the keyboard.
 * The numbers will be input five per line, on four lines.
 *
 * @author Wali Morris
 */

#include <iostream>
using namespace std;


int main() {
    int a[4][5], input;
    for (auto &x : a) {
        for(int &y : x) {
            cout << "Enter a number: ";
            cin >> input;
            y = input;
        }
    }
    for (auto & index1 : a) {
        for (int index2 : index1) {
            cout << index2 << " ";
        }
        cout << endl;
    }

    return 0;
}
