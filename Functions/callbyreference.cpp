/**
 * Notes: In programming, there are two ways to pass arguments to a function. 
 * 
 * 1. Pass by value: passing an argument as value, is just passing the original
 *    value of the variable itself.
 *
 * 2. Pass by reference: passing an argument by reference is essentially passing
 *    that variable itself. To me, this is along the lines of object oriented 
 *    programming because this variable(object) will be manipulated in some way
 *    and in whatever way is changing the variable(object itself) throughout the
 *    entire system. 
 *
 *   -cheers
 */ 


#include<iostream> 

using namespace std;

void addTwo(int &num) { 
    num = num + 2; 
} 

int main() { 
    
    int num = 0; 

    cout << "Enter a number and see it added by two: "; 
    cin >> num; 

    cout << "Before addition: " << num << endl; 

    addTwo(num); 

    cout << "After addition: " << num << endl; 

    return 0; 
} 
