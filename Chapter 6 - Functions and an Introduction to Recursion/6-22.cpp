/* Displays a square of asterisks with a side length based on input
 * from the user.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

void square(const unsigned int);

int main() {
    unsigned int side;
    cout << "Enter a side length: ";    cin >> side;
    square(side);
}

void square(const unsigned int side) {
    for ( unsigned int i{1} ; i <= side ; i++ ) {
        for ( unsigned int j{1} ; j <= side ; j++ ) {
            cout << "*";
        }
        
        cout << "\n";
    }
}
