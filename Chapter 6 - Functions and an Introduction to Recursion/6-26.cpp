/* Prints integer tables of conversion for Celsius and Fahrenheit.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

int celsius(const unsigned int);                    // Function prototypes
int fahrenheit(const unsigned int);

int main() {
    cout << setprecision(2) << fixed;               // Manipulate output stream
    cout << "Celsius\tFahrenheit\n";                // Print headers
    for ( unsigned int i{0} ; i <= 100 ; i++ ) {    // Iterate from 0 to 100 Celsius
        cout << setw(7) << i << "\t" << setw(10) << fahrenheit(i) << endl;  // Print Fahrenheit equivalents
    }
    
    cout << "Fahrenheit\tCelsius\n";                // Print headers
    for ( unsigned int i{32} ; i <= 212 ; i++ ) {   // Iterate from 32 to 212 Fahrenheit
        cout << setw(10) << i << "\t" << setw(7) << celsius(i) << endl;     // Print Celsius equivalents
    }
}

int celsius(const unsigned int f) {                 // Takes a Fahrenheit temperature and converts to Celsius
    return 5 * (f - 32) / 9;
}

int fahrenheit(const unsigned int c) {              // Takes a Celsius temperature and converts to Fahrenheit
    return c * 1.8 + 32;
}
