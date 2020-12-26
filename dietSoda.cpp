/**
 * A government research lab has conducted that an artificial sweetener commonly 
 * used in diet soda will cause death in laboratory mice. A friends of yours is 
 * desperate to lose weight but cannot give up soda. Your friends wants to know
 * how much diet soda it is possible to drink without dying as a result. Write 
 * a program to supply the answer. The input to the program is the amount of 
 * artifical sweetener needed to kill a mpuse, the weight of the mouse, and the
 * weight of the dieter. To ensure the safety of your friend, be sure the program
 * requests the weight at which the dieter will stop dieting, rather than the 
 * dieter will stop dieting, rather than the dieter's current weight. Assume 
 * that diet soda contains one-tenth of 1% artificial sweetener. Use a variable 
 * declaration with the modifier const to give a name to this fraction. You may 
 * want to express the percentage as the double value 0.001.
 *
 * By: Wali Morris  
 */

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const double DIET_SODA_SWEETENER = 0.001; 
    double dieterWeightGoal; 
    double mouseWeight; 
    double sweetenerKillAmountForMouse;
    double sweetenerKillAmountForDieter;  
    double mouseToDieterConversion;
    double dietSodaSweetenerAmount;   

    cout << "Enter the dieter's weight goal: "; 
    cin >> dieterWeightGoal; 
    
    cout << "Enter the mouse's weight: "; 
    cin >> mouseWeight;

    cout << "Enter the amount(in grams) of sweetener that will kill a mouse: "; 
    cin >> sweetenerKillAmountForMouse;  

    mouseToDieterConversion = dieterWeightGoal/mouseWeight;
    dietSodaSweetenerAmount = sweetenerKillAmountForMouse / DIET_SODA_SWEETENER;

    sweetenerKillAmountForDieter = mouseToDieterConversion * dietSodaSweetenerAmount;  

    cout << "The amount of artificial sweetener that will kill a human at \n" 
	 << dieterWeightGoal << "lbs is " << sweetenerKillAmountForDieter 
	 << "grams\n"; 

    return 0; 
} 

    
