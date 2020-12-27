/**
 * Negotiating a consumer loan is not always straightforward. One 
 * form of loan is the dicount installment loan, which works as 
 * follows. Suppose a loan has a face value of $1000, the interest
 * rate is 15%, and the duration is 18months. The interest is 
 * computed by multiplying the face value of $1000 by .15, yeilding
 * $150. That figure is then multiplied by the loan period of 1.5 
 * years to yield $225 as the total interest owed. That amount is 
 * immediately deducted from the face value, leaving the consumer 
 * with only $775. Repayment is made in equal monthly installments 
 * based on the face value. So the monthly loan payment will be 
 * $1000 divided by 18, which is $55.56. This method of calculation 
 * may not be too bad if the consumer needs $1000. Write a program 
 * that will take three inputs: the amount the consumer needs to 
 * receive, the interest rate, and the duration of the loan in months. 
 * The program should then calculate the face value required in order 
 * for the consumer to receive the amount needed. It should also 
 * calculate the monthly payment. 
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

    double requestedLoanAmount; 
    double interestRate;
    double interestDeductibles; 
    double faceValue;  
    int loanDurationInMonths;
    double loanDurationInYears; 
    double monthlyPayment; 
     

    cout << "Enter requested loan amount: " ; 
    cin >> requestedLoanAmount; 

    cout << "Enter interest rate on requested loan amount: "; 
    cin >> interestRate; 

    cout << "Enter loan duration in months: "; 
    cin >> loanDurationInMonths;

    cout << "Enter loan duration in years: "; 
    cin >> loanDurationInYears; 

    interestDeductibles = (requestedLoanAmount * interestRate) * loanDurationInYears; 
    faceValue = requestedLoanAmount + interestDeductibles;
    monthlyPayment = faceValue / loanDurationInMonths;  

    cout << "Face value of a requested loan of $"
         << requestedLoanAmount << " is\n$"
	 << faceValue << " with a monthly payment of $"
	 << monthlyPayment << endl; 

    return 0; 
}

    
