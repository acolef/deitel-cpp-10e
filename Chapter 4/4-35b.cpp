/* This program estimates the value of e by using series expansion
 * techniques.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int n{1}, acc;
    double e{1}, factorial{1};
    
    cout << "Enter the desired accuracy (integer): ";   cin >> acc;
    
    while ( n <= acc ) {
        factorial *= n;                     // Store the factorial 
        e += 1 / factorial;                 // Now add the inverse of it to e
        ++n;                                // Then increment n by 1
    }
    
    cout << setprecision (8) << "e is approximately " << e << endl;
}
