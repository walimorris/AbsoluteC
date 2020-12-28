/**
 * The video game machines at your local arcade output coupons depending on 
 * how well you play the game. You can redeem 10 coupons for a candy bar or 
 * 3 coupons for a gumball. You prefer candy bars to gumballs. 
 *
 * Write a program that inputs the number of coupons you win and outputs how 
 * many candy bars and gumballs you can get if you spend all your coupons on 
 * candy bars first and any remaining coupons on gumballs. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const int COUPONS_TO_WIN_CANDYBAR = 10; 
    const int COUPONS_TO_WIN_GUM_BALL = 3; 

    int totalCouponCount;
    int totalPossibleCandyBars; 
    int totalPossibleGumBalls;  
    int couponsAfterRedeemingCandyBars; 

    cout << "enter number of total coupons: "; 
    cin >> totalCouponCount; 

    if (totalCouponCount < COUPONS_TO_WIN_CANDYBAR) { 
        cout << "Insufficient coupon count, no winnings.\n"; 
    } else { 
	totalPossibleCandyBars = totalCouponCount / COUPONS_TO_WIN_CANDYBAR; 
	
	couponsAfterRedeemingCandyBars = totalCouponCount - 
		(COUPONS_TO_WIN_CANDYBAR * totalPossibleCandyBars); 

	if (couponsAfterRedeemingCandyBars >= COUPONS_TO_WIN_GUM_BALL) { 
	    totalPossibleGumBalls = couponsAfterRedeemingCandyBars / 
		    COUPONS_TO_WIN_GUM_BALL;
	}
    }

    cout << "Possible Candy Bars: " << totalPossibleCandyBars << endl;  
    cout << "Possible Gum Balls : " << totalPossibleGumBalls << endl; 

    return 0; 
}     



