/* This program prints the decimal equivalent of a binary number that
 * the user inputs.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() { 
    unsigned int binary, posVal{1}, decimal{0}, digit;
    
    cout << "Enter a binary number: ";      cin >> binary;
    while (binary) {                        // Loops as long as binary is non-zero
        digit = binary % 10;                // Picks out rightmost digit
        decimal += digit*posVal;            // Add digit's contribution to the decimal value
        posVal *= 2;                        // Update positional value by multiplying it by 2
        binary /= 10;                       // Update binary number by dividing by 10; this eliminates rightmost digit
    }
    
    cout << "The decimal equivalent is " << decimal << endl;
    
    return 0;
}
