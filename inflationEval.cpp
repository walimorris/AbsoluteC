/**
 * Write a program to gauge the expected cost of an item in a specified number of 
 * years. The program asks for the cost of the item, the number of years from now
 * that the item will be purchased, and the rate of inflation. The program then 
 * outputs the estimated cost of the item after the specified period. Have the user
 * enter the inflation rate as a percentage, such as 5.6(percent). Your program 
 * should then conver the percentage to a decimal fraction, such as 0.056, and 
 * should use a loop to estimate the price adjusted for inflation. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(4); 

    int yearsFromNowPurchased; 

    double costOfItem;
    double originalCost; 
    double costOfItemAfterInflation; 

    double rateOfInflationAsPercentage;
    double rateOfInflationAsDecimal;  

    cout << "Enter how many years from now this " 
	 << "item will be purchased: "; 
    cin >> yearsFromNowPurchased; 

    cout << "Enter cost of item: "; 
    cin >> costOfItem; 

    originalCost = costOfItem; 

    cout << "Enter rate of inflation as percentage: "; 
    cin >> rateOfInflationAsPercentage; 

    rateOfInflationAsDecimal = rateOfInflationAsPercentage / 100;

    for (int i = 0; i < yearsFromNowPurchased; i++) {
        costOfItemAfterInflation = costOfItem + (costOfItem * rateOfInflationAsDecimal); 
	costOfItem = costOfItemAfterInflation;
    }

    cout.precision(2); 
    cout << "After " << yearsFromNowPurchased << " years of inflation at "
	 << rateOfInflationAsPercentage << "%, an item that costs $" 
         << originalCost << " will be valued at $" << costOfItem << endl; 

    return 0; 
}     
