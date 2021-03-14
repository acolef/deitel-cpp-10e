/* Performs exponentiation without employing the <cmath> library
 * function pow.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

unsigned int integerPower(const int, const unsigned int);   // Function prototype

int main() {
    int base;
    unsigned int exponent;
    
    cout << "Enter an integer base: ";   cin >> base;
    cout << "Enter a positive, nonzero integer exponent: ";  cin >> exponent;
    cout << base << " to the power of " << exponent << " is: " << integerPower(base, exponent) << endl;
}

unsigned int integerPower(const int base, const unsigned int exponent) {
    int value{1};
    
    for ( unsigned int i{1} ; i <= exponent ; i++) {        // Multiply value by base for each iteration
        value *= base;
    }
    
    return value;
}
