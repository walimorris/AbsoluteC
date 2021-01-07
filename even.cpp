/**
 * Write a function definition for a function called even that 
 * takes one argument of type int and returns a bool value. The
 * function returns true if its one argument is an even number; 
 * otherwise, it returns false. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

bool even(int x) { 
    return (x % 2 == 0); 
} 

int main() { 
    int x; 

    cout << "Enter a number: "; 
    cin >> x; 

    cout << x << " is even: "; 

    if (even(x)) { 
        cout << "true." << endl; 
    } else { 
	cout << "false." << endl; 
    } 

    return 0; 
} 
