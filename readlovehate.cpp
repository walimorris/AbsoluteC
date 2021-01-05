/**
 * Create a text file that contains the text "I hate C++ and hate programming!" 
 * Write a program that reads in the text from the file and outputs each word
 * to the console but replaces any occurrence of "hate" with "love".
 *
 * by: Wali
 */ 

#include<iostream> 
#include<string> 
#include<fstream> 

using namespace std; 

int main() { 

    fstream inputStream; 

    string text; 
    inputStream.open("hatetolove.txt"); 

    while (inputStream >> text) {
	
	if(text.compare("hate") == 0) { 
	    cout << "love "; 
	} else { 
            cout << text << " ";
	} 
    } 

    cout << endl; 
    inputStream.close(); 

    return 0; 
}     
    
