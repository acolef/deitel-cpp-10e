/* This program reads a nonnegative input and computes its factorial.
 * Only works for relatively small values of n.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int n, factorial{1};
    
    cout << "Enter a nonnegative integer: ";    cin >> n;
    
    while ( n ) {               // While n > 0
        factorial *= n;         // Multiply factorial's value by n
        --n;                    // Decrement n by 1
    }
    
    cout << "The factorial is " << factorial << endl;
}
