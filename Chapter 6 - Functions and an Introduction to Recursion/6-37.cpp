/* A non-recursive program for outputting the Fibonacci sequence for
 * values of 0 through 10.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);

int main() {
    for ( unsigned int counter{0} ; counter <= 10 ; counter++ ) {
        cout << "Fibonacci(" << counter << ") = " << fibonacci(counter) << endl;
    }
}

unsigned long fibonacci(unsigned long number) {
    static unsigned long backOne, backTwo, sum, temp;   // Static so the variables won't be destroyed 
                                                        // when stack frame pops
    if (0 == number) {
        backTwo = number;
        return number;
    }
    else if (1 == number) {
        backOne = number;
        return number;
    }
    else {
        sum = backOne + backTwo;                // Fibonacci number is stored in variable sum
        temp = backTwo;                         // Store backTwo's old value in variable temp
        backTwo = backOne;                      // Update backTwo to backOne
        backOne = backOne + temp;               // Update backOne by adding backTwo's old value to backOne
        return sum;
    }
}
