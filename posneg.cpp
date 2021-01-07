/**
 * Write a function declaration and a function definition for a 
 * function that takes one argument of type double. The function 
 * returns the character value 'P' if its argument is positive 
 * and returns 'N' if its argument is zero or negative. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

char posneg(double n); 

int main() { 

    double n; 

    cout << "Enter a floating-point number: "; 
    cin >> n;

    char v = posneg(n); 

    cout << "posneg: " << v << endl; 

    return 0; 
} 

char posneg(double n) { 
    if(n > 0) { 
        return 'P'; 
    } 
    return 'N'; 
} 


