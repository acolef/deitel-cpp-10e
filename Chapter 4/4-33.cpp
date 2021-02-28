/* This program reads three non-zero double values and determines
 * whether or not they could represent the sides of a triangle.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter three numbers: ";    cin >> a >> b >> c;
    
    if ((a + b) > c) { 
        if ((a + c) > b) {
            if ((b + c) > a) {
                cout << "These could be the sides of a triangle.\n";        // If all 3 criteria of the triangle inequality hold, then this could be a triangle
            }
            else {
                cout << "These could not be the sides of a triangle.\n";    // If b + c < a, then no
            }
        }
        else {
            cout << "These could not be the sides of a triangle.\n";        // If a + c < b, then no
        }
    }
    else {
        cout << "These could not be the sides of a triangle.\n";            // If a + b < c, then no
    }
}
