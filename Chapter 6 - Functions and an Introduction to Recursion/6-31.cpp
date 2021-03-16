/* Finds the greatest common divisor of two integers. The algorithm
 * updates gCommonDiv each time a new common divisor is found; thus,
 * the last common divisor found will be the greatest common divisor.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int gcd(int, int);                                          // Function prototype for gcd

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";     cin >> num1 >> num2;
    cout << "The greatest common divisor for " << num1 << " and " <<  num2 << " is " 
        << gcd(num1, num2) << endl;                         // Calls function gcd to find the gcd
}

int gcd(int num1, int num2) {                               // Function definition for gcd
    int gCommonDiv;
    
    for ( unsigned int i{1} ; i <= num1 / 2 || i <= num2 / 2 ; i++ ) {  // Only test up to highest num / 2
        if ( num1 % i == 0 && num2 % i == 0 )                           // i must be a divisor of both numbers
            gCommonDiv = i;                                 // update gcd with newest value
    }
    
    return gCommonDiv;
}
