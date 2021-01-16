/**
 * Write a void function definition for a function called zerboth that has two 
 * call by reference parameters, both of which are variables of type int, and
 * sets the values of both variables to 0. 
 *
 * By: Wali 
 */ 

#include<iostream> 

using namespace std; 

void zeroBoth(int &x, int &y) { 
    x = 0; 
    y = 0; 
} 

int main() { 

    int x = 10; 
    int y = 20; 

    cout << "Before call x = " << x << " y = " << y << endl; 

    zeroBoth(x, y); 

    cout << "After call x = " << x << " y = " << y << endl; 

    return 0; 
} 
