/**
 * Write a program that finds and prints all the prime numbers between 3 and 100. A prime 
 * number is a number that can only be divided by one and itself. Feel free to change start
 * and end number constants to check for primes beyond 100.  
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const int start = 3; 
    const int end = 100; 

    // outer loop iterates from start number to end number 
    for(int i = start; i < end + 1; i++) { 
        int num = i;
        bool flag = 0;  	
	
	// inner loop iterates from 2 to num - 1, if this iteration goes to num, 
	// then the number is divisble by itself and will report it as a non-prime
	// integer.
	for (int j = 2; j < num - 1; j++) { 
	    if ((num % j) == 0) { 
	        flag = 1; 	
	    }  
	}

        // flag will be triggered if a non-prime has been found, otherwise reports 
	// num as prime. 	
        if(flag == 0) { 
	    cout << num << " is prime" << endl; 
	} else { 
	    cout << num << " is not prime" << endl; 
	}
    } 

    return 0; 
} 
