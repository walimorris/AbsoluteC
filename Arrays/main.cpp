#include <iostream>

using namespace std;

void bubblesort(int array[], int size) {
    int i, j;
    for ( i = 0; i < size - 1; i++ ) {
        for ( j = i + i; j < size; j++ ) {
            if ( array[i] > array[j] ) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}


int main() {
    int array[] = {1, 4, 1, 3, 2, 7};
    bubblesort(array, 6);
    for ( int &element : array ) {
        cout << element;
    }
    cout << endl;
    return 0;
}
