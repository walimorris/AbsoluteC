/**
 * Chapter 2 Self-Test Exercise 
 *
 * Suppose savings and expenses are variables of type double that have been 
 * given values. Write an if-else statement that outputs the word Solvent, 
 * decreases the value of savings by the value of expenses, and sets the 
 * value of expenses to zero provided that savings is at least as large as 
 * expenses. If, however, savings is less than expenses, the if-else 
 * statement simply outputs the word Bankrupt and does not change the value 
 * of any variables. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    double savings; 
    double expenses;  

    cout << "Enter savings amount: "; 
    cin >> savings; 

    cout << "Enter expenses amount: "; 
    cin >> expenses;

    savings = savings - expenses; 

    if (savings > 0) { 
        cout << "Solvent.\n"; 
    } else { 
	cout << "Bankrupt!\n"; 
    } 
} 

    


