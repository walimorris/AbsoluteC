/**
 * Workers at a particular company have won a 7.6 % pay increase retroactive for six
 * months. Write a program that takes an employee's previous annual salart as input 
 * and outputs the amount of retroactive pay due the employee, the new annual salary, 
 * and the new monthly salary. Use a variable declaration with the modidier const to 
 * express the pay increase. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const double PAY_INCREASE_PERCENTAGE = .076;

    double preAnnualSalary; 
    double postAnnualSalary;  
    double salaryIncrease; 
    double monthlySalary; 
    
    cout << "Enter previous annual salary: "; 
    cin >> preAnnualSalary; 

    salaryIncrease = preAnnualSalary * PAY_INCREASE_PERCENTAGE; 
    postAnnualSalary = preAnnualSalary + salaryIncrease;
    monthlySalary = postAnnualSalary / 12;  

    cout << "An annual salary increase of %" << PAY_INCREASE_PERCENTAGE
	 << " with an annual salary of\n$" << preAnnualSalary
	 << " is a new annual salary of $" << postAnnualSalary
         << "\nand a monthly salary of $" << monthlySalary
         << ".\n"; 

    return 0; 
}     
