/**
 * Write a void function that uses five parameters: three value parameters that provide the lengths of
 * the edges and two reference parameters that compute the area and perimeter.
 *
 * By: Wali
 */

#include<iostream>
#include<cmath>

using namespace std;

/**
 * computes the area and perimeter of a triangle given three lengths.
 * @param x : represents length x
 * @param y : represents length y
 * @param z : represents length z
 * @param a : reference to area
 * @param p : reference to perimeter
 */
void computeTriangle(double x, double y, double z, double &a, double &p) {
    // sp = semi-perimeter
    double sp = (x + y + x) / 2;
    a = sqrt((sp * (sp - x)) * (sp * (sp - y)) * (sp * (sp - z)));
    p = x + y + z;
}

int main() {
    double x = 0.0, y = 0.0, z = 0.0;
    double area = 0.0, perimeter = 0.0;

    cout << "Enter length 1: ";
    cin >> x;

    cout << "Enter length 2: ";
    cin >> y;

    cout << "Eneter length 3: ";
    cin >> z;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);

    cout << "Before computation, Area = " << area << " Perimeter = " << perimeter << endl;

    computeTriangle(x, y, z, area, perimeter);

    cout << "After computation, Area = " << area << " Perimeter = " << perimeter << endl;
}
