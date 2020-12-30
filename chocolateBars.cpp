/**
 * Write a program that inputs the number of dollars and outputs how many chocolate bars
 * you can collect after spending all your money and redeeming as many coupons as possible.
 * Also output the number of leftover coupons. The easiest way to solve this problem is to 
 * use a loop. 
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

    const double CHOCOLATE_BAR_COST = 1.00; 
    const int COUPONS_TO_REDEEM_CHOCOLATE_BAR = 7;

    int moneyOnChocolateBars;
    int couponsPurchased;
    int totalChocolateBarsPurchased;
    int chocolateBarsOnHand;   

    cout << "Enter how much money you have to spend on chocolate bars: "; 
    cin >> moneyOnChocolateBars;

    totalChocolateBarsPurchased = moneyOnChocolateBars / CHOCOLATE_BAR_COST; 
    chocolateBarsOnHand = totalChocolateBarsPurchased; 
    couponsPurchased = totalChocolateBarsPurchased;

    while(couponsPurchased >= COUPONS_TO_REDEEM_CHOCOLATE_BAR) { 
        totalChocolateBarsPurchased += couponsPurchased / COUPONS_TO_REDEEM_CHOCOLATE_BAR;
	couponsPurchased -= couponsPurchased / COUPONS_TO_REDEEM_CHOCOLATE_BAR; 
	chocolateBarsOnHand = couponsPurchased / COUPONS_TO_REDEEM_CHOCOLATE_BAR;
    } 

    cout << "Total chocolate bars purchased: " << totalChocolateBarsPurchased << endl; 

    return 0; 
}     
        	
        



    
