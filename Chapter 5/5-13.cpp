/* Calculates the factorials from 1 through 20.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    
    cout << "N\tFACTORIAL\n";                   // print table header
    
    for ( unsigned int i{1}; i <= 20; i++ ) {   // This loop cycles through the N values
        long fact{1};                           // fact gets reinitialized for each N
        cout << i << "\t";
        
        for ( unsigned int j{i}; j >= 1; j--) {     // This loop computes the factorial of N
            fact *= j;                              // j * j-1 * j-2 * ... 
        }
        
        cout << fact << endl;                       // print final value stored in fact
    }
}
