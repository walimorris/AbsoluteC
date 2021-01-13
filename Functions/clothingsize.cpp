/**
 * Write a program that asks for the user's height, weight, and age, and then 
 * computes clothing sizes according to the following formulas: 
 *
 * hat size = weight in pounds divided by height in inches and all that 
 * multiplies by 2.9
 *
 * jacket size (chest in inches) = height times weight divided by 288 and 
 * then adjusted by adding one-eighth of an inch for each 10 years over 
 * age 30.(The adjustments only takes place after a full 10 year. So, there
 * isn't an adjustment for ages 30-39, but one-eighth of an inch is added 
 * for age 40.)
 *
 * Waist in inches = weight divided by 5.7 and then adjusted by adding one-
 * tenth of an inch for each 2 years over age 28. (The adjustment only takes 
 * place after a full 2 years. So, there is no adjustment for age 29, but 
 * one-tenth of an inch is added for age 30.)
 *
 * Use functions for each calculation. Your program should allow the user to 
 * repeat this calculation as often as he or she wishes. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

/**
 * Calculates the hat size of user.
 * @param height : height of user
 * @param weight : weight of user in pounds
 * @param age : user's age 
 * @return double 
 */
double calculateHatSize(double height, double weight, int age) {
    return (weight / height) * 2.9; 
}

/**
 * Calculates the jacket size of user. 
 * @param height : height of user
 * @param weight : weight of user in pounds
 * @param age : user's age 
 * @return double 
 */ 
double calculateJacketSize(double height, double weight, int age) { 
    double inchesAdded = 0; 

    if (age > 30) { 
        inchesAdded = (age-30) % 10 * .125; 
    } 

    return (height * weight) / 299 + inchesAdded; 
} 

/**
 * Calculates user's waist size in inches. 
 * @param height : height of user
 * @param weight : weight of user in pounds
 * @param age : user's age
 * @return double 
 */ 
double calculateWaistSize(double height, double weight, int age) { 
    double inchesAdded = 0; 

    if (age > 28) { 
        inchesAdded = (age-28) / 2 * .1; 
    } 

    return (weight / 5.7) + inchesAdded; 
} 

int main() { 

    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 

    double height = 0; 
    double weight = 0;
    
    int age = 0;

    double hatSize = 0.0;
    double jacketSize = 0.0;
    double waistInInches = 0.0;     

    int iterate = 0;  

    while (iterate != -1) { 
        
        cout << "Enter height in inches: "; 
        cin >> height; 

        cout << "Enter weight in pounds: "; 
        cin >> weight; 

        cout << "Enter age: "; 
        cin >> age;

	hatSize = calculateHatSize(height, weight, age);
        jacketSize = calculateJacketSize(height, weight, age);
        waistInInches = calculateWaistSize(height, weight, age); 	

        cout << "Hat Size: " << hatSize << endl; 
	cout << "Jacket Size: " << jacketSize << endl; 
	cout << "Waist Size: " << waistInInches << " inches" << endl; 
        
	cout << "Submit any number to continue(-1 to quit): "; 
	cin >> iterate; 
    } 

    cout << "\nTake care!\n\t\t-wali\n" << endl; 

    return 0; 
}     
