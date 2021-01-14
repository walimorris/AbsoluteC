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

void addByReference(int &num, int numberToAdd) { 
    num = num + numberToAdd; 
} 

void addByValue(int num, int numberToAdd) { 
    num = num + numberToAdd; 
} 

int main() { 
    
    int referenceNum = 0;
    int referenceNumberToAdd = 0;  

    cout << "Enter a number and see it grow by reference: "; 
    cin >> referenceNum; 

    cout << "Enter a number to add: "; 
    cin >> referenceNumberToAdd;   

    cout << "Before addition: " << referenceNum << endl; 

    addByReference(referenceNum, referenceNumberToAdd);
    addByValue(referenceNum, referenceNumberToAdd);  

    cout << "Reference Value After Addition: " << referenceNum << endl; 
    cout << "Does adding " << referenceNumberToAdd << " to this reference" 
	 << " value change it: " << referenceNum << endl; 

    return 0; 
} 
