/* Calculates the total parking charge for three customers. 
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges (double);   // Function prototype for calculateCharges

int main() {
    double h1, h2, h3;
    
    cout << "Enter the total hours parked for car 1: "; cin >> h1;
    cout << "Enter the total hours parked for car 2: "; cin >> h2;
    cout << "Enter the total hours parked for car 3: "; cin >> h3;
    
    cout << fixed << showpoint;
    cout << "Car\tHours\t\tCharge"                                  
        << "\n1\t" << setw(5) << setprecision(1) << h1                      // Prints hours parked for car 1
        << "\t\t" << setw(6) << setprecision(2) << calculateCharges(h1)     // Print parking cost for car 1
        << "\n2\t" << setw(5) << setprecision(1) << h2                      // Car 2
        << "\t\t" << setw(6) << setprecision(2) << calculateCharges(h2)
        << "\n3\t" << setw(5) << setprecision(1) << h3                      // Car 3
        << "\t\t" << setw(6) << setprecision(2) << calculateCharges(h3)
        << "\nTOTAL\t" << setw(5) << setprecision(1) << h1 + h2 + h3        // Print totals
        << "\t\t" << setw(6) << setprecision(2) << calculateCharges(h1) + calculateCharges(h2) + calculateCharges(h3)
        << endl;
}

double calculateCharges (double h) {        // Function definition for calculateCharges
    double total{20.00};                    // Total is at least $20.00
    
    if ( h <= 3.0 )                         // No extra charges for parking less than 3 hours
        return total;
    else {
        if ( (h > 3.0) && (h < 24.0) ) {    // If hours parked is between 3.0 and 24.0
            total += ceil(h - 3.0) * 5.00;  // add appropriate amount to total
            return total;                  
        }
        else 
            return 50.00;                   // If h >= 24.0, the cost is $50.00
    }
} 
