/**
 * Write a complete C++ program to compute and output the square 
 * roots of the whole numbers 1 to 10. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 
#include<cstdlib> 
#include<cmath> 

using namespace std; 

int main() { 
    for(int i = 1; i < 11; i++) { 
        double squareroot = sqrt(i); 
	cout << "Square Root of " << i << ": "
	     << squareroot << endl; 
    } 
    return 0; 
} 
