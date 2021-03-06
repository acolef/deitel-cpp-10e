/* Calculates the value of pi by approximating an infinite series.
 * I use switch statements for practice, but one could use the 
 * conditional operator ?: to handle the alternating term signs.
 * About 137,056 terms are needed before getting a result beginning
 * with 3.14159.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi, denom{1.0};
    
    cout << setprecision(7) << fixed;
    cout << "TERMS\tPI\n";                          // Print table header
    for ( unsigned int i{1}; i <= 200000 ; i++ ) {
        switch ( i % 2 ) {
            case 1:                                 // Odd terms are positive
                pi += 4 / denom;                    // Add term contribution to pi
                denom += 2;                         // Increment denominator by 2 for next loop
                break;
            default:                                // Even terms are negative
                pi -= 4 / denom;                    // Add term contribution to pi
                denom += 2;                         // Increment denominator by 2
        }
        cout << i << "\t" << pi << endl;            // Print the loop's results each iteration
    }
        
}
