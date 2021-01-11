#include<iostream> 
#include<string> 

using namespace std; 

void computeYield(double startingBalance, int numberOfYears, double interestRate) {

    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);     

    double starting = startingBalance; 
    double ending = 0.0; 
    double interestMade = 0.0; 
    double totalInterestMade = 0.0; 
	
    int i = 0; 

    while(i < numberOfYears) {
	interestMade = starting * interestRate;  
        ending = starting + interestMade; 
	starting = ending; 
	totalInterestMade += interestMade; 

	cout << "After year " << i + 1 << ": $" << starting << endl;
        i++; 	
    }

    cout << "You made $" << ending << " after " << numberOfYears << " years" << endl; 
    cout << "$" << totalInterestMade << " came from interest yield!" << endl; 
}    

int main() { 

    double startingBalance; 
    int numberOfYears; 
    double interestRate; 

    cout << "\nThanks for using The High Yield Savings Account Calculator.\n" 
	 << "This calculator computes your savings based on a high yield\n"
	 << "savings account interest rate, the beginning amount, and the\n"
	 << "number of years you plan to save. Good luck!\n\t\t-wali & Gergana <3"
	 << endl; 

    cout << "\nEnter starting balance: "; 
    cin >> startingBalance; 

    cout << "Enter years to save: "; 
    cin >> numberOfYears; 

    cout << "Enter interest rate: "; 
    cin >> interestRate; 

    computeYield(startingBalance, numberOfYears, interestRate); 

    cout << "\nYou made bank!\n\t\t-w" << endl; 

    return 0; 
}     
