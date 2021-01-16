/**
 * Write a void function defintion for a function called addTax. The function 
 * addTax has two formal parameters: taxRate, which is the amount of sales tax
 * expressed as a percentage; and cost, which is the cost of an item before tax.
 * The function changes the value of cost so that it includes sales tax. 
 *
 * By: Wali 
 */ 

#include<iostream> 

using namespace std;

void addTax(double taxRate, double &cost) { 

    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 

    cost = (taxRate / 100) * cost + cost; 
} 

int main() {

    double taxRate = 0.0; 
    double cost = 0.0; 

    cout << "Enter Cost: "; 
    cin >> cost; 

    cout << "Enter tax rate in percentage(ex: 5 or 5.5): "; 
    cin >> taxRate; 

    cout << "Cost before adding tax: $" << cost << endl; 
    
    addTax(taxRate, cost); 

    cout << "Cost after " << taxRate << "% tax rate: $" << cost << endl; 

    return 0; 
}     

    
