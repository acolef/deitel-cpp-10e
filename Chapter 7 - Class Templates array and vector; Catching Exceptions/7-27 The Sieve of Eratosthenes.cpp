/* Finds the prime numbers between 2 and 999 by using the Sieve
 * of Eratosthenes method.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <array>

const int N{1000};  // number of elements in the array

void solveSieve();
void printSieve(std::array<bool, N>&);

int main() {
    solveSieve();
}

void solveSieve() {
    std::array<bool, N> sieve;

    for ( int count{0}; count < N; count++ )    // initialize all of sieve's elements to true
        sieve[count] = true;
    
    for ( int count{2}; count < N; count++ ) {
        if ( sieve[count] == true ) {
            for ( int mSearch{2 * count}; mSearch < N; mSearch++ ) {    // find multiples of current count value
                if ( mSearch % count == 0 )
                    sieve[mSearch] = false;     // set appropriate sieve element to false
            }
        }
    }
   
    printSieve(sieve);
}
    
void printSieve(std::array<bool, N>& sieve) {
    for ( int count{0}; count < N; count++ ) {
        if ( sieve[count] == true )
            std::cout << std::setw(4) << count;
    }
    
    std::cout << "\n";
}
