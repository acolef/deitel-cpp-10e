/* Modified Fig. 6.25 in Deitel text. Computes the factorial of 10 
 * by means of recursion, displaying each recursive step's parameter
 * and indenting the output appropriately.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long, string); // function prototype

int main() {
    for ( unsigned int counter{0} ; counter <= 10 ; ++ counter ) {
        cout << setw(2) << "\n" << counter << "!\n" << factorial(counter, "")
            << endl;
    }
}

// recursive definition of function factorial
unsigned long factorial(unsigned long number, string indent) {
    cout << indent << "Factorial(" << number << ")" << endl;
    
    if ( number <= 1 ) { // test for base case
        return 1;
    }
    else { // recursion step
        return number * factorial(number - 1, indent + " ");
    }
}
