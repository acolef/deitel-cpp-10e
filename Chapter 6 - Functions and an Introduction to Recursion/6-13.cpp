/* Rounds entered numbers to their nearest integer using the floor
 * function.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double input;
    
    for ( unsigned int i{1} ; i <= 5 ; i++ ) {          // Read 5 double numbers and find their nearest integers
        cout << "Input a floating point number: ";
        cin >> input;
        cout << "The nearest integer to " << input << " is " << floor(input + 0.5) << endl;
    }
}
