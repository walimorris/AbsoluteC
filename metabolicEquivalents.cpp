/**
 * Write a program that inputs a subject's weight in pounds, the number of METS
 * for an activity, and the number of minutes spent on that activity, and then 
 * outputs an estimate for the total number of calories burned. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const double POUNDS_TO_KILOGRAMS = 2.2; 

    int mets; 
    double weightInKilograms;
    double minutesOnActivity; 
    double caloriesBurned; 

    cout << "Enter weight in pounds: "; 
    cin >> weightInKilograms; 

    weightInKilograms *= POUNDS_TO_KILOGRAMS;
    
    cout << "Enter the number of METS for this activity: "; 
    cin >> mets; 

    cout << "Enter the minutes spent on this activity: "; 
    cin >> minutesOnActivity; 

    caloriesBurned = (0.0175 * mets) * weightInKilograms; 

    cout << "You burned " << caloriesBurned << " calories/minute" 
	 << " engaging in an activity\n" << "equal to " << mets 
	 << " METS for " << minutesOnActivity 
         << " minutes." << endl; 

    return 0; 
}     
