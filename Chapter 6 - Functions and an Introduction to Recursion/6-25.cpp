/* Takes the time as three integer arguments and returns the number
 * of seconds since the last time the clock struck 12. I use the 
 * pow function whose prototype is in <cmath>, but one could avoid
 * this very simply.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>
using namespace std;

int timeSinceTwelve(int, int, int);     // Function prototype for timeSinceTwelve

int main() {
    int hours, minutes, seconds;        // Variables for the first time
    int hours2, minutes2, seconds2;     // Variables for the second time
    
    // Returns the time passed since 12 o' clock, in seconds
    cout << "Enter the time (hh/mm/ss): "; 
    cin >> hours >> minutes >> seconds;
    cout << "Amount of seconds since 12 o' clock: " << timeSinceTwelve(hours, minutes, seconds) << endl;
    
    // Returns the time in between two times, each within one 12-hour cycle of the clock
    cout << "Enter first time (hh/mm/ss): "; 
    cin >> hours >> minutes >> seconds;
    cout << "Enter second time (hh/mm/ss): ";
    cin >> hours2 >> minutes2 >> seconds2;
    cout << "Time in seconds between those two times: "
        << fabs(timeSinceTwelve(hours, minutes, seconds) - timeSinceTwelve(hours2, minutes2, seconds2))
        << endl;
}

int timeSinceTwelve(int h, int m, int s) {  // Function definition
    return h * pow(60, 2) + m * 60 + s;     // Gives the total amount of time in seconds
}
