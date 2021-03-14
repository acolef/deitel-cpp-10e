/* Calculates the hypotenuse of three right triangles.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath> 
using namespace std;

double hypotenuse(const double, const double);  // Function prototype of hypotenuse

int main() {
    double side1, side2;
    
    for ( unsigned int i{1} ; i <= 3 ; i++ ) {
        cout << "Enter side 1: ";   cin >> side1;
        cout << "Enter side 2: ";   cin >> side2;
        cout << "The hypotenuse is: " << hypotenuse(side1, side2) << endl;
    }
}

double hypotenuse(const double side1, const double side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}
