/**
 * Calculating Checkbook Balances
 *
 * Functionality:
 * Write a program that calculates the closing balance for an indeterminate number of checkbooks. 
 * The programmust logically flow as follows:
 * 
 * Step 1. Ask for the data for the first checkbook: opening balance, withdrawals and deposits
 * 
 * Step 2. Display the opening balance, the number of withdrawals, the number of deposits, and
 * the closing balance.
 * 
 * Step 3. Ask whether the user wishes to calculate the balance on another checkbook:
 *      - If so, go back to Step 1
 *      - Otherwise, end the program
 *
 * 
 * CSC 309 - Winter
 * 01/19/2021
 * @author Wali Morris
 */

#include <iostream>

using namespace std;

int main() {

    int openingBalance = 0;

    char selectContinue = 'y';

    while (selectContinue == 'y') {
        cin >> openingBalance;

        int withdrawals = 0;
        int deposits = 0;
        int data = 1;
        int closingBalance = openingBalance;

        while (data != 0) {
            cin >> data;
            if ( data < 0 ) {
                closingBalance = closingBalance + data;
                withdrawals = withdrawals + 1;
            } else {
                if ( data > 0 ) {
                    closingBalance = closingBalance + data;
                    deposits = deposits + 1;
                }
            }
        }

        cout << "\nOpening Balance: $" << openingBalance << endl;
        cout << "Number of Withdrawals: " << withdrawals << endl;
        cout << "Number of Deposits: " << deposits << endl;
        cout << "Closing Balance: $" << closingBalance << endl;

        cout << "\nContinue? y/n: ";
        cin >> selectContinue;

        if (selectContinue == 'y') {
            openingBalance = 0;
        }
    }
    return 0;
}
