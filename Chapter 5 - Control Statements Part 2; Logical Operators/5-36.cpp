/* Displays a double number with several different digits of precision 
 * to investigate representational errors. If we don't use cout << fixed,
 * we encounter representational errors starting at p = 4.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double test{123.02};
    
    cout << showpoint;
    for ( unsigned int p{8} ; p >= 1 ; p-- )
        cout << setprecision(p) << p << " " << test << endl;
}
