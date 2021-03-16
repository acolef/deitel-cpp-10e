/* Finds prime numbers < 1000; only tests up to sqrt(num)
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int num);

int main() {
    for ( unsigned int i{2} ; i <= 10000 ; i++ ) {          // Checking numbers 2 - 10,000
        if ( isPrime(i) == true )
            cout << i << " is prime\n";
    }
}

bool isPrime (int num) {
    bool test{true};
    
    for ( unsigned int i{1} ; i <= sqrt(num) ; i++ ) {
        if ( num % i == 0 && i != 1 ) {                     // If num doesn't meet definition of a prime number
            test = false;                                   // set test to false and exit the loop
            break;
        }
    }
    
    if ( test == false )                                    // If test is false, num is not prime
        return false;
    else 
        return true;                                        // Otherwise it's prime
}
