/**
 * A liter is 0.264179 gallons. Write a program that will read in the number of 
 * liters of gasoline consumed by the user's car and the number of miles traveled 
 * by the car and will then output the number of miles per gallon the car delivered. 
 * Your program should allow the user to repeat this calculation as often as the 
 * user wishes. Define a function to compute the number of miles per gallon. Your 
 * program should use a globally defined constant for the number of liters per gal. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

const double GALLON_IN_ONE_LITER = 0.264179; 

/* The formula to calculate miles per gallon is m/g. The formula 
 * used to find the total amount of gallons used is l * 0.264179. 
 * @param liters : liters of gas used. 
 * @param milesTraveled : total miles traveled.
 * @return double 
 */ 
double computeMilesPerGallon(int liters, double milesTraveled) { 
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(4);

    return milesTraveled / (liters * GALLON_IN_ONE_LITER); 
} 

int main() {  

    double milesPerGallon; 
    double litersConsumed; 
    double milesTraveled; 

    cout << "Submitting '0' or any integer less than, will end this program.\n"
	 << "Example: entering 0, -1 or -22 will end this program, thankyou!" 
	 << endl; 

    cout << "Enter number of liters consumed by vehicle: "; 
    cin >> litersConsumed; 

    cout << "Enter miles traveled: "; 
    cin >> milesTraveled;  

    while (milesTraveled > 0 && litersConsumed > 0) {  	    
	milesPerGallon = computeMilesPerGallon(litersConsumed, milesTraveled);
	cout << "You received " << milesPerGallon << " mpg" << endl;

        cout << "Enter number of liters consumed by vehicle: "; 
        cin >> litersConsumed; 

        cout << "Enter miles traveled: "; 
        cin >> milesTraveled; 	
    } 

    cout << "Thank you for using this program!" << endl; 

    return 0; 
} 


