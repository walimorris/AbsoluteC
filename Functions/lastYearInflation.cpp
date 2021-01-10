/**
 * Write a program to gauge the rate of inflation for the past year. The program 
 * asks for the price of an item (such as a hotdog or a one-carat diamond) both 
 * one year ago and today. It estimates the inflation rate as the difference in 
 * price divided by the year-ago price. Your program should allow the user to 
 * repeat this calculation as often as the user wishes. Define a function to 
 * compute the rate of inflation. The inflation rate should be a value of type 
 * double giving the rate as a percentage: for example 5.3 for 5.3%. 
 *
 * By: wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std;

double computeInflationRate(double priceOfItemToday, double priceOfItemLastYear) { 
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 

    return (priceOfItemToday - priceOfItemLastYear) / priceOfItemLastYear * 100; 
} 

int main() { 

    double priceOfItemToday; 
    double priceOfItemLastYear;
    double inflationRate;  

    cout << "\nThis program asks for the price of one item as it is today\n" 
	 << "and the price of the same item as it was 1 year ago. If any\n" 
	 << "value is $0 or less, the program will terminate." << endl; 

    cout << "\nPlease enter item's current price: ";
    cin >> priceOfItemToday; 

    cout << "Please enter item's price last year: "; 
    cin >> priceOfItemLastYear; 

    while (priceOfItemToday > 0 && priceOfItemLastYear > 0) { 
        
        inflationRate = computeInflationRate(priceOfItemToday, priceOfItemLastYear); 

        cout << "\nRate of inflation: " << inflationRate << "%" << endl; 

        cout << "\nPlease enter item's current price: "; 
        cin >> priceOfItemToday; 

        cout << "Please enter item's price last year: "; 
        cin >> priceOfItemLastYear; 
    } 

    cout << "\nThank you for using this program\n\t\t\t-w" << endl; 
    
    return 0; 
}     
