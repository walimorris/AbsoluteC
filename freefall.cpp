/**
 * Write a program that allows the user to enter a time in seconds and 
 * then outputs how far an object would drop if it is in freefall for 
 * that length of time. Assume no friction or resistance from air and 
 * a constant acceleration of 32 feet per second due to gravity. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const int CONSTANT_ACCELERATION = 32;
    const double CONSTANT_VARIABLE = .5;  
    
    double timeInSeconds;
    double freeFallDistance;  

    cout << "This program requests the user to enter a time in seconds\n" 
	 << "and then outputs how far an object would drop if it is in\n"
         << "freefall for that length in time.\n"  	 
         << "\nEnter the time in seconds: "; 

    cin >> timeInSeconds; 

    freeFallDistance = CONSTANT_VARIABLE * CONSTANT_ACCELERATION * 
	    (timeInSeconds * timeInSeconds); 

    cout << "Distance of fall: " << freeFallDistance << "ft.\n"; 

    return 0; 
} 

     
