/* Finds numerous Pythagorean triples for side lengths <= 500.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    
    cout << "Pythagorean Triples\na\tb\tc\n";
    for ( unsigned int side1{1} ; side1 <= 500 ; side1 ++ ) {                        
        for ( unsigned int side2{1} ; side2 <= 500 ; side2 ++ ) {                    
            for ( unsigned int hypotenuse{1} ; hypotenuse <= 500 ; hypotenuse ++ ) { 
                if ( side1 * side1 + side2 * side2 == hypotenuse * hypotenuse ) {   // if the theorem is satisfied
                    cout << side1 << "\t" << side2 << "\t" << side3 << endl;        // print the side lengths
                }
            }
        }
    }
}
