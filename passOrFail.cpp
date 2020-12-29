/**
 * Write an if-else statement that outputs the word Passed provided the value of 
 * the variable exam is greater than or equal to 60 and also the value of the 
 * variable programsDone is greater than or equal to 10. Otherwise, the if-else
 * statement outputs the word Failed. The variable exam and programsDone are both
 * of type int. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    int exam; 
    int programsDone; 

    cout << "Enter the number of programs completed: "; 
    cin >> programsDone; 

    cout << "Enter the student's exam score, rounded "
	 << "to nearest whole number: "; 
    cin >> exam; 

    if(exam >= 60 && programsDone >= 10) { 
        cout << "Passed\n";
    } else { 
        cout << "Failed\n"; 
    } 

    return 0; 
}     
