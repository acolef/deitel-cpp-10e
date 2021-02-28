/* This program estimates the value of e^x by using series expansion
 * techniques.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int n{1}, acc;
    double x, eX{1}, factorial{1}, num{1};
    
    cout << "Enter a value for x: ";    cin >> x;
    cout << "Enter the desired accuracy (integer): ";   cin >> acc;
    
    while ( n <= acc ) {
        factorial *= n;                 // Store the factorial
        num *= x;                       // Multiply numerator by x and store it in num
        eX += num / factorial;          // Now divide the numerator by the appropriate factorial and add it to eX
        ++n;                            // Increment n by 1
    }
    
    cout << setprecision(8) << "e^" << x << " is approximately " << eX << endl;
}
