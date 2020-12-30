/**
 * Write a program that will tell you how many months it will take you to pay off 
 * the loan, as well as the total number of interest paid over the life of the 
 * loan. Use a loop to calculate the amount of interest and the size of the debt 
 * after each month. (Your program need not output the monthly amount of interest 
 * paid and remaining debt, but you may want to write a preliminary version of the 
 * program that does output these values.) Use a variable to count the number of
 * loop iterations and hence the number of months until the debt is zero. You may
 * want to use other variables as well. The last payment may be less than $50, then
 * your monthly payment of $50 will not pay off your debt, although it will come 
 * close. One month's interest on $50 is only 75 cents. 
 *
 * Note: This program is based off of the constant variables set for a newly purchased 
 * stereo system for $1000, a monthly interest rate of 1.5% and monthly payments of 
 * $50. Feel free to change these constant variables to check other loan calculations 
 * with different values. 
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

    const double STEREO_SYSTEM = 1000.00;
    const double MONTHLY_INTEREST_RATE = 1.5; 
    const double MONTHLY_PAYMENT = 50.00; 

    double initialStereoSystemCost = STEREO_SYSTEM; 
    double totalInterestPaid; 
    int totalMonthsMakingPayments;

    double monthlyInterestPaid;
    double remainingMonthlyPayment;  
     

    while(initialStereoSystemCost > 0) { 
        monthlyInterestPaid = initialStereoSystemCost * (MONTHLY_INTEREST_RATE / 100); 
        totalInterestPaid += monthlyInterestPaid; 

        remainingMonthlyPayment = MONTHLY_PAYMENT - monthlyInterestPaid; 
        initialStereoSystemCost -= remainingMonthlyPayment; 

        totalMonthsMakingPayments++;
    }

    cout.precision(2); 

    cout << "Total Months making payments: " << totalMonthsMakingPayments << endl; 
    cout << "Total Interest Paid         : $" << totalInterestPaid << endl;   

    return 0; 
}     
    
