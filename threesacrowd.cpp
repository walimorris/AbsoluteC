/**
 * Write a definition for a void function that has three arguments for type int
 * and that outputs to the screen the product of these three arguments. Put the
 * definition in a complete program that reads in three numbers and then calls 
 * this function.
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

void threesacrowd(int x, int y, int z) {
    int product = (x * y * z);  
    cout << "The product of " << x << " * " << y 
	 << " * " << z << " is: " << product << endl; 
}

int main() { 

    int x, y, z; 

    cout << "Enter x: "; 
    cin >> x; 

    cout << "Enter y: "; 
    cin >> y; 

    cout << "Enter z: "; 
    cin >> z; 

    threesacrowd(x, y, z); 

    return 0; 
} 


