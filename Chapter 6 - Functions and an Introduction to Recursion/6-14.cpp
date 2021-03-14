/* Contains four different functions for rounding to different
 * decimal places for several double inputs.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger(double);  // Return type double is used to explicitly show the function
                                // rounds to the nearest integer with no decimal places
double roundToTenths(double);
double roundToHundreths(double);
double roundToThousandths(double);

int main() {
    double input; 
    
    for ( unsigned int i{1} ; i <= 5 ; i++ ) {              // Enter 5 different numbers to round
        cout << "\nEnter a floating point number: ";
        cin >> input;                                       // Call the rounding functions below
        cout << input << " rounded to the nearest integer: " << roundToInteger(input) << endl;
        cout << input << " rounded to the nearest tenths: " << roundToTenths(input) << endl;
        cout << input << " rounded to the nearest hundreths: " << roundToHundreths(input) << endl;
        cout << input << " rounded to the nearest thousandths: " << roundToThousandths(input) << endl;
    }
}

double roundToInteger(double number) {
    return floor(number + 0.5);
}

double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10;
}

double roundToHundreths(double number) {
    return floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000;
}
