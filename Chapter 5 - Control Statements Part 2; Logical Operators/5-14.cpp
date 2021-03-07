/* Fig. 5.6 in the Deitel text, modified to repeat the steps for 
 * various other interest rates, using a for loop.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <cmath> // for the pow function
using namespace std;

int main(){
    // set floating-point number format
    cout << fixed << setprecision(2);
    
    double principal{1000.00}; // initial amount before interest
    
    for ( unsigned int rate{5} ; rate <= 10 ; rate++ ) {    // modify rate to be an unsigned int for loop control
        cout << "\nInitial principal: " << principal << endl;
        cout << "    Interest rate: " << static_cast<double>(rate) / 100 << endl; // temporarily cast rate as a double
    
        // display headers
        cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
    
        //calculate amount on deposit for each of ten years
        for ( unsigned int year{1}; year <= 10; year++ ) {
            double amount = principal * pow(1.0 + static_cast<double>(rate) / 100, year);
        
            // display the year and the amount
            cout << setw(4) << year << setw(20) << amount << endl;
        }
    }
}
