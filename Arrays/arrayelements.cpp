/**
 * Write a function definition for a function called oneMore, which has a formal parameter for an
 * array of integers and increases the value of each array element by 1. Add any other formal params
 * that are needed.
 *
 * By: Wali
 */

#include<iostream>

using namespace std;

/**
 * Adds 1 to each element of array
 * @param arr : The array to manipulate
 * @param size : The size of the array
 */
void oneMore(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + 1;
    }
}

/**
 * Displays the elements of an array.
 * @param arr : The array to display
 * @param size : The size of the array
 */
void display(const int arr[], int size) {
    for ( int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 0;
    cout << "Enter a size for your array: ";
    cin >> size;

    int array[size];

    // create an array determined by input size
    for ( int i = 0; i < size; i++) {
        array[i] = i * 2;
    }
    display(array, size);
    cout << "\nNow watch the array elements grow by 1!" << endl;
    oneMore(array, size);
    display(array, size);

    return 0;
}

