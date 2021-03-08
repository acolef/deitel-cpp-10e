/* A modified Fig. 5.6 from the Deitel text. This program calculates 
 * compound interest for various rates over 1626-2016 with a for loop. 
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
    
    double principal{24.00}; // initial amount before interest
    
    for ( unsigned int rate{5} ; rate <= 10 ; rate++ ) {
        cout << "\nInitial principal: " << principal << endl;
        cout << "    Interest rate: " << static_cast<double>(rate) / 100 << endl;
    
    // display headers
        cout << "\nYear" << setw(24) << "Amount on deposit" << endl;
    
        for (unsigned int year{1}; year <= 390; year++) {
            double amount = principal * pow(1.0 + static_cast<double>(rate) / 100, year);
        
        // display the year and the amount
            cout << setw(4) << year << setw(24) << amount << endl;
        }
    }  
}
