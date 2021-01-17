/** 
 * CodeLab Assignment 
 *
 * Write the defintion of a function reverse, whose first parameter is an array
 * of integers and whose second parameter is the number of elements in the array
 * The function reverse the elements of the array. The function does not return
 * a value 
 *
 * By: Wali 
 */ 

#include<iostream>

using namespace std;

/**
 * Returns an array in reverse order.
 * @param array : The manipulated array
 * @param size : Size of the given array
 */
void reverse(int array[], int size) {
    for ( int i = 0; i < (size/2); i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4};

    reverse(array, 5);
    reverse(array2, 4);

    for ( auto &x : array ) {
        cout << x << " ";
    }
    cout << endl;

    for ( auto &y : array2 ) {
        cout << y << " ";
    }
    cout << endl;

    return 0;
}
