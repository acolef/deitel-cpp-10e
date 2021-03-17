/* Uses a recursive function to calculate the result of a number
 * raised to some exponent.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int power(int, int);                                            // Function prototype for power

int main() {
    int base, exponent;
    
    cout << "Enter a base and then an exponent: ";  cin >> base >> exponent;
    cout << base << " to the power of " << exponent << " is: " << power(base, exponent) << endl;
}

int power(int base, int exponent) {                             // Function definition for power
    if ( exponent == 1)                                         // If exponent = 1, then return base
        return base;
    else
        return base * power(base, exponent - 1);                // Recursion step
}
