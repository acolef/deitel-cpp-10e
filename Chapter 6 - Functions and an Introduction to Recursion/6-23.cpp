/* Displays a square of arbitrary symbol with a side length based on input
 * from the user.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

void square(const unsigned int, const char);

int main() {
    unsigned int side;
    char fill;
    cout << "Enter a side length: ";    cin >> side;
    cout << "Enter a character: ";      cin >> fill;
    square(side, fill);
}

void square(const unsigned int side, const char fillCharacter) {
    for ( unsigned int i{1} ; i <= side ; i++ ) {
        for ( unsigned int j{1} ; j <= side ; j++ ) {
            cout << fillCharacter;
        }
        
        cout << "\n";
    }
}
