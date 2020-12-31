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
	
    for(int i = start; i < end + 1; i++) { 
        int num = i;
        bool flag = 0;  	
	for (int j = 2; j < num - 1; j++) { 
	    if ((num % j) == 0) { 
	        flag = 1; 	
	    }  
	}
        if(flag == 0) { 
	    cout << num << " is prime" << endl; 
	} else { 
	    cout << num << " is not prime" << endl; 
	}
    } 
    return 0; 
} 
