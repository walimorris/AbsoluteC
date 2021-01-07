/**
 * CodeLab Assingment -- Week 1
 *
 * Write a loop that reads strings from standard input where  the 
 * string is either "land", "air", or "water". The loop terminates 
 * when "xxxxx" is read in. Other strings are ignored. After the 
 * loop, your code should print out 3 lines: the first consisting 
 * of the string "land:" followed by the number of "land" strings 
 * read in, the second consisting of the string "air:" followed by 
 * the number of "air" strings read in, and the third consisting of 
 * the string "water:" followed by the number of "water" strings 
 * read in. Each of these should be printed on a seperate line. 
 *
 * By: Wali Morris
 * 01/06/2021
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 
	
    int landCount = 0; 
    int airCount = 0; 
    int waterCount = 0; 
	
    string readIn;

    cout << "Enter a string: "; 
    cin >> readIn; 
	
    while(!(readIn).compare("xxxxx") == 0) { 
	if(readIn.compare("land") == 0) { 
	    landCount += 1; 
	} else if(readIn.compare("air") == 0) { 
	    airCount += 1; 
	} else { 
	    if(readIn.compare("water") == 0) { 
		waterCount += 1; 
	    } 
	}
	cout << "Enter a string: "; 
	cin >> readIn; 
    }	

    cout << "land: " << landCount << endl; 
    cout << "air: " << airCount << endl; 
    cout << "water: " << waterCount << endl; 
	
    return 0; 
} 
