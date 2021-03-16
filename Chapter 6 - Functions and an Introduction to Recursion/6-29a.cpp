/* Finds prime numbers < 10000 without using break statements.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

bool isPrime (int num);                                     // Function prototype for isPrime

int main() {
    for ( unsigned int i{2} ; i <= 10000 ; i++ ) {          // Checking numbers 2 - 10,000
        if ( isPrime(i) == true )                           // Call isPrime to test if i is a prime
            cout << i << " is prime\n";
    }
}

bool isPrime (int num) {                                    // isPrime function definition
    int sum{0};                                             // Initialize to 0 each time isPrime is called
    
    for ( unsigned int i{1} ; i <= num ; i++ ) {            // Tests all the numbers up to num
        if ( num % i == 0 )
            sum += i;
    }
    
    if ( sum == num + 1 )                                   // If sum = num + 1, num is prime
        return true;
    else 
        return false;
}
