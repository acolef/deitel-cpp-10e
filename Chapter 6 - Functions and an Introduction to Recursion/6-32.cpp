/* Inputs a student's average and outputs a quality point.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int qualityPoints(int);                                             // Function prototype for qualityPoints

int main() {
    int average;
    
    cout << "Enter a grade average 0-100: ";    cin >> average;
    while ( average < 0 || average > 100 ) {                        // Input validation
        cout << "Enter a grade average 0-100: ";    cin >> average;
    }
    
    cout << "QPA: " << qualityPoints(average) << endl;              // Call qualityPoints to determine QPA
}

int qualityPoints(int average) {                                    // Function definition for qualityPoints
    if ( average >= 90 )                                            // If average >= 90
        return 4;                                                   // return 4
    else if ( average >= 80 )                                       // Otherwise, if average >= 80
        return 3;                                                   // return 3, and so on
    else if ( average >= 70 )
        return 2;
    else if ( average >= 60 )
        return 1;
    else return 0;                                                  // if average < 60, return 0
}
