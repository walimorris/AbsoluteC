/**
 * Write a function definition for a function called inOrder that 
 * takes three arguments pf type int. The function returns true if 
 * the three arguments are in ascending order; otherwise, it returns
 * false. 
 *
 * By: Wali 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

bool inOrder(int x, int z, int y); 

int main() { 

    int x, y, z; 
    
    cout << "Enter x: "; 
    cin >> x; 

    cout << "Enter y: "; 
    cin >> y; 

    cout << "Enter z: "; 
    cin >> z; 

    bool isInOrder = inOrder(x, y, z); 

    cout << x << " " << y << " " << z 
	 << " is in order: "; 

    if (isInOrder) { 
        cout << "true." << endl; 
    } else { 
	cout << "false." << endl; 
    } 

    return 0; 
} 

bool inOrder(int x, int y, int z) { 
    return (x <= y && y <= z); 
} 
