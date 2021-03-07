/* This program calculates the diameter, circumference, and area
 * of a circle based on its radius, which is entered by the user.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    double radius;
    
    cout << "Enter the circle's radius: ";  cin >> radius;
    cout << showpoint << "Diameter: " << 2 * radius << endl
    << "Circumference: " << 2 * 3.14159 * radius << endl
    << "Area: " << 3.14159 * radius * radius << endl;
    
    return 0;
}
