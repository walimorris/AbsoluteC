/**
 * An employee is paid at a rate of $16.78 per hour for regular 
 * hours worked in a week. Any hours over that are paid at the 
 * overtime rate of one and one-half times that. From the worker's
 * gross pay, 6% is witheld for social security tax, 14% is withheld
 * for the federal income tax, 5% is withheld for State Income tax,
 * and $10 per week is withheld for union dues. If the worker 
 * has three or more dependents, then an additional $35 is withheld
 * to cover the extra cost of health insurance beyond what the 
 * employer pays. Write a program that will read in the number of 
 * hours worked in a week and the number of dependents as input 
 * and that will then output the worker's gross pay, each withholding
 * amount, and the net take-home pay for the week. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() {

    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);     

    const int maxWorkHoursInWeek = 40; 	

    const double payRate = 16.78; 
    const double overTimePayRate = payRate * 1.5;
    const double unionDues = 10.00;
    const double socialSecurityTaxPercentage = .06; 
    const double federalIncomeTaxPercentage = .14; 
    const double stateIncomeTaxPercentage = .05; 
    
    double grossPay; 
    double netPay;
    double totalOverTimePay;  
    double socialSecurityTaxWithholdings; 
    double federalIncomeTaxWithholdings; 
    double stateIncomeTaxWithholdings; 
    double healthInsuranceCost;
    double totalIncomeWithholdings;  

    double overTimeWorkedInWeek; 
    double hoursWorkedInWeek; 
    int numberOfDependents; 

    cout << "Enter number of hours worked this week: "; 
    cin >> hoursWorkedInWeek; 

    if (hoursWorkedInWeek > maxWorkHoursInWeek) { 
        overTimeWorkedInWeek = hoursWorkedInWeek - maxWorkHoursInWeek; 
        totalOverTimePay = overTimePayRate * overTimeWorkedInWeek; 
    }

    cout << "Enter number of dependents: "; 
    cin >> numberOfDependents; 

    if(numberOfDependents >= 3) { 
        healthInsuranceCost = 35.00; 
    } 

    grossPay = (payRate * hoursWorkedInWeek) + totalOverTimePay; 
    socialSecurityTaxWithholdings = grossPay * socialSecurityTaxPercentage; 
    federalIncomeTaxWithholdings = grossPay * federalIncomeTaxPercentage; 
    stateIncomeTaxWithholdings = grossPay * stateIncomeTaxPercentage;
    
    totalIncomeWithholdings = unionDues + socialSecurityTaxWithholdings + 
	    federalIncomeTaxWithholdings + stateIncomeTaxWithholdings + 
	    healthInsuranceCost;

    netPay = grossPay - totalIncomeWithholdings; 

    cout << "Hour worked this week: " << hoursWorkedInWeek << endl; 
    cout << "Over time hours worked this week: " << overTimeWorkedInWeek << endl; 
    cout << "Social Security Tax Withholdings: $" << socialSecurityTaxWithholdings << endl; 
    cout << "Federal Income Tax Withholdings: $" << federalIncomeTaxWithholdings << endl; 
    cout << "State Income Tax Withholdings: $" << stateIncomeTaxWithholdings << endl; 
    cout << "Health Insurance Witholdings: $" << healthInsuranceCost << endl; 
    cout << "Total Income Withholdings: $" << totalIncomeWithholdings << endl; 
    cout << "Gross Pay: $" << grossPay << endl; 
    cout << "Net Pay: $" << netPay << endl; 

    return 0; 
}   
