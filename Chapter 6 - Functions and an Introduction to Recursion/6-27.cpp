/* Finds the minimum of three doubles.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

double min(double, double, double);         // Function prototype for min

int main() {
    double num1, num2, num3;
    
    cout << "Input three floating point numbers: "; cin >> num1 >> num2 >> num3;
    cout << "The minimum is " << min(num1, num2, num3) << endl;     // Call function min to determine minimum
}

double min(double num1, double num2, double num3) {
    double smallest{num1};                  // Assume num1 is smallest
    
    if ( num2 < smallest )                  // If num2 is less than the value in smallest
        smallest = num2;                    // then set smallest's value to num2
    
    if ( num3 < smallest )
        smallest = num3;
    
    return smallest;                        // Return the value stored in smallest
}
