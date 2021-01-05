/**
 * Write a program that calculates the total grade for N classroom exercises 
 * as a percentage. The user should input the value for N followed by each 
 * of the N scores and totals. Calculate the overall percentage(sum of the
 * total points earned divided by the total points possible) and output it 
 * as a percentage. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);     

    int totalClassroomExercises;  
    double totalPointsEarned;
    double totalPointsPossible;  

    double finalPercentage; 

    cout << "Enter number of exercises: "; 
    cin >> totalClassroomExercises; 

    int start = 0;
    double pointsPossible;  
    double pointsEarned; 
    
    while(start < totalClassroomExercises) {
	
	cout << "Score received for exercise " << start + 1 << ": "; 
        cin >> pointsEarned;

        cout << "Points possible for exercise " << start + 1 << ": "; 
	cin >> pointsPossible; 

	totalPointsPossible += pointsPossible; 
	totalPointsEarned += pointsEarned;

        start++; 	
    } 
    
    finalPercentage = totalPointsEarned / totalPointsPossible * 100; 
    
    cout << "Your total is " << totalPointsEarned << " out of " << totalPointsPossible
	 << ", or " << finalPercentage << "%" << endl; 

    return 0; 
} 


        	
        
    

