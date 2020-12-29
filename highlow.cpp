/**
 * Chapter 2 self-test exercise 
 *
 * Write an if-else statement that outputs the word High if the value of the 
 * variable score is greater than 100 and low if the value of score is at most
 * 100. Score is type int. 
 *
 * By: Wali Morris
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    int number; 
    
    cout << "Enter a number from 0-200: "; 
    cin >> number; 

    if(number <= 100 && number >= 0) { 
        cout << "LOW!\n"; 
    } else if (number > 100 && number <= 200) { 
        cout << "HIGH!\n"; 
    } else { 
	cout << "Number out of range(0-200)!\n"; 
    }
}     
    
