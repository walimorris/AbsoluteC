/**
 * Write a function declaration(function prototype) and a function 
 * definition for a function that takes three arguments, all of
 * type int, and that returns the sum of its three arguments. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int sumOfThree(int x, int y, int z); 

int main() { 

    int sum = sumOfThree(4, 7, 6); 
    cout << "sum: " << sum << endl; 

    return 0; 
} 

int sumOfThree(int x, int y, int z) { 
    return x + y + z; 
} 
 
    
