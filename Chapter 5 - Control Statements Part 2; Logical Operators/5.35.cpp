/* A program designed to test the DollarAmount class (see 5-30.h).
 * This program features parts of solutions for 5-30 and 5-31.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include "5-33.h"               // Include the DollarAmount class header file
using namespace std;

int main() {
    DollarAmount amount1{1653, 45};     // $1,653.45
    DollarAmount amount2{123, 6};       // $123.06
    int rate, divisor;
    
    cout << "amount1: $" << amount1.toString() << endl;
    cout << "amount2: $" << amount2.toString() << endl;
    amount1.divide(7);
    cout << "amount1 divided by 7: $" << amount1.toString() << endl;
    amount2.divide(40);
    cout << "amount2 divided by 40: $" << amount2.toString() << endl;
    
    cout << "\nEnter an interest rate as an integer, and then a divisor: ";
    cin >> rate >> divisor;
    
    double dRate = rate;                // We need double versions of rate and divisor for later
    double dDivisor = divisor;
    string strRate{to_string(rate)};    // Creates a string version of int rate
    
    if ( strRate.size() > 1 )                       // Check size of string rate to correctly display interest percentage
        cout << setprecision(strRate.size() - 1);   // If its size > 1, set the precision to string rate's size - 1
    else
        cout << setprecision(strRate.size());       // If its size = 1, set the precision to its size, 1
    
    cout << fixed                                   // Forces display of decimal point and trailing zeros within the precision
    << "Interest rate: " 
    << (dRate / dDivisor) * 100                     // Display the interest rate in percentage format
    << "%\n";
    
    DollarAmount account{1000, 0};      // $1,000.00
    cout << "Initial balance in amount1: $" << account.toString() << endl;
    cout << setw(4) << "Year" << setw(20) << "Amount on deposit" << endl;
    for ( unsigned int year{1} ; year <= 10 ; year++ ) {
        account.addInterest(rate, divisor);
        
        cout << setw(4) << year << setw(20) << account.toString() << endl;
    }
    
}
