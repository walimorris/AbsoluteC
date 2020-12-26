/**
 * A metric ton is 35,273.92 ounces. Write a program that will read the weight 
 * of a package of breakfast cereal in ounces and output the weight in metric 
 * tons as the number of boxes needed to yield one metric ton of cereal 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const double METRIC_TON = 35273.92; 
    double weightOfCerealPackage;
    int totalCerealPackages;  

    cout << "Enter the weight of the cereal package: "; 
    cin >> weightOfCerealPackage;
    
    totalCerealPackages = METRIC_TON / weightOfCerealPackage; 

    cout << totalCerealPackages << " cereal boxes will equal 1 metric ton" 
         << " with each package weighed at\n" << weightOfCerealPackage 
	 << " ounces per package." << endl; 

    return 0; 
}  


